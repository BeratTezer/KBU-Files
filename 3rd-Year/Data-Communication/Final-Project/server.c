#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sqlite3.h>
#include <pthread.h>

#define MAX_BUFFER 1024

sqlite3 *db;

int insert_order(const char *customer_name, const char *order_details, int cost, int order_status, const char *customer_address) {
    char query[MAX_BUFFER];
    snprintf(query, sizeof(query),
             "INSERT INTO orders (customer_name, order_details, cost, order_status, customer_address) "
             "VALUES ('%s', '%s', %d, %d, '%s');",
             customer_name, order_details, cost, order_status, customer_address);

    char *err_msg = NULL;
    int rc = sqlite3_exec(db, query, 0, 0, &err_msg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "[SERVER.c]: SQL hata: %s\n", err_msg);
        sqlite3_free(err_msg);
        return 1;
    }
    return 0;
}

int get_and_update_pending_order(char *response) {
    sqlite3_stmt *stmt;
    const char *sql = "SELECT id, customer_name, order_details, cost, customer_address FROM orders WHERE order_status = 1 ORDER BY id DESC LIMIT 1;";
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, 0);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "[SERVER.c]: SQL hata: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    if (sqlite3_step(stmt) == SQLITE_ROW) {
        int id = sqlite3_column_int(stmt, 0);
        const char *customer_name = (const char*)sqlite3_column_text(stmt, 1);
        const char *order_details = (const char*)sqlite3_column_text(stmt, 2);
        int cost = sqlite3_column_int(stmt, 3);
        const char *customer_address = (const char*)sqlite3_column_text(stmt, 4);

        snprintf(response, MAX_BUFFER, "ID: %d, Name: %s, Order: %s, Cost: %d, Address: %s", id, customer_name, order_details, cost, customer_address);

        const char *update_sql = "UPDATE orders SET order_status = 0 WHERE id = ?;";
        sqlite3_stmt *update_stmt;
        sqlite3_prepare_v2(db, update_sql, -1, &update_stmt, 0);
        sqlite3_bind_int(update_stmt, 1, id);
        sqlite3_step(update_stmt);
        sqlite3_finalize(update_stmt);

    } else {
        strcpy(response, "No pending orders.");
    }

    sqlite3_finalize(stmt);
    return 0;
}

void *client_handler(void *client_sock_ptr) {
    int client_sock = *((int*)client_sock_ptr);
    char buffer[MAX_BUFFER];
    int n;

    bzero(buffer, MAX_BUFFER);
    recv(client_sock, buffer, sizeof(buffer), 0);

    bzero(buffer, MAX_BUFFER);
    recv(client_sock, buffer, sizeof(buffer), 0);
    printf("[CLIENT]: Siparis alindi: %s\n", buffer);

    char *token;
    char customer_name[256];
    char order_details[256];
    int cost, order_status;
    char customer_address[256];

    token = strtok(buffer, ",");
    strcpy(customer_name, token);

    token = strtok(NULL, ",");
    strcpy(order_details, token);

    token = strtok(NULL, ",");
    cost = atoi(token);

    token = strtok(NULL, ",");
    order_status = atoi(token);

    token = strtok(NULL, ",");
    strcpy(customer_address, token);

    if (insert_order(customer_name, order_details, cost, order_status, customer_address) == 0) {
        printf("[SERVER.c]: Siparis veritabanina kaydedildi: %s, %s, %d, %d, %s\n", 
               customer_name, order_details, cost, order_status, customer_address);
    }

    send(client_sock, "Siparis alindi ve kaydedildi", 28, 0);

    bzero(buffer, sizeof(buffer));
    if (recv(client_sock, buffer, sizeof(buffer), 0) > 0 && strcmp(buffer, "2") == 0) {
        char response[MAX_BUFFER];
        if (get_and_update_pending_order(response) == 0) {
            send(client_sock, response, strlen(response), 0);
        }
    }

    close(client_sock);
    printf("[SERVER.c]: Client baglanti sonlandi\n\n");

    pthread_exit(NULL);
}

int main() {
    char *ip = "127.0.0.1";
    int port = 5566;
    int server_sock, client_sock;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addr_size;
    pthread_t thread_id;

    int rc = sqlite3_open("orders.db", &db);
    if (rc) {
        fprintf(stderr, "[SERVER.c]: Veritabanı açılamadı: %s\n", sqlite3_errmsg(db));
        exit(1);
    }

    const char *create_table_sql = "CREATE TABLE IF NOT EXISTS orders ("
                                   "id INTEGER PRIMARY KEY, "
                                   "customer_name TEXT, "
                                   "order_details TEXT, "
                                   "cost INTEGER, "
                                   "order_status INTEGER, "
                                   "customer_address TEXT);";
    char *err_msg = NULL;
    rc = sqlite3_exec(db, create_table_sql, 0, 0, &err_msg);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "[SERVER.c]: Tablo oluşturulamadı: %s\n", err_msg);
        sqlite3_free(err_msg);
        sqlite3_close(db);
        exit(1);
    }

    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock < 0) {
        perror("[SERVER.c]: Socket hatasi");
        exit(1);
    }
    printf("[SERVER.c]: TCP server soketi olusturuldu\n");

    memset(&server_addr, '\0', sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = port;
    server_addr.sin_addr.s_addr = inet_addr(ip);

    int n = bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr));
    if (n < 0) {
        perror("[SERVER.c]: Bind hatası");
        exit(1);
    }
    printf("[SERVER.c]: Port bağlandı\n");

    listen(server_sock, 5);
    printf("[SERVER.c]: Dinlemeye baslandi...\n");

    while (1) {
        addr_size = sizeof(client_addr);
        client_sock = accept(server_sock, (struct sockaddr*)&client_addr, &addr_size);
        if (client_sock < 0) {
            perror("[SERVER.c]: Client kabul hatası");
            continue;
        }
        printf("[SERVER.c]: Client bağlantısı kabul edildi\n");

        if (pthread_create(&thread_id, NULL, client_handler, &client_sock) != 0) {
            perror("[SERVER.c]: Thread oluşturulamadi");
        }
    }

    close(server_sock);
    sqlite3_close(db);
    return 0;
}
