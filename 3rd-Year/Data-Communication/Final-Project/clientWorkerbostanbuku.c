#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define MAX_BUFFER 1024

int main() {
    char *ip = "127.0.0.1";
    int port = 5566;
    int sock;
    struct sockaddr_in addr;
    socklen_t addr_size;
    char buffer[MAX_BUFFER];
    int n, operation;

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("[-]Socket error");
        exit(1);
    }
    printf("[CLIENT]: TCP server soketi olusturuldu.\n");

    memset(&addr, '\0', sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = port;
    addr.sin_addr.s_addr = inet_addr(ip);

    if (connect(sock, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
        perror("[-]Connect error");
        close(sock);
        exit(1);
    }
    printf("[CLIENT]: Sunucuya baglandik.\n");

    strcpy(buffer, "bostanbuku");
    send(sock, buffer, strlen(buffer), 0);
    printf("[CLIENT]: Server tarafindan tanindi.\n");

    while (1) {
        printf("\n\n0 - Exit\n1 - Siparis Olustur\n2 - Siparis Durumu Goruntule\n\n> ");
        scanf("%d", &operation);
        getchar();

        switch (operation) {
            case 0:
                printf("[CLIENT]: Cikis yapildi\n");
                close(sock);
                return 0;

            case 1:
                {
                    char customer_name[256];
                    char customer_address[256];
                    char order_details[256];
                    int cost = 0;
                    int order_status = 0;
                    int order_choice;

                    printf("Siparisinizi Secin:\n");
                    printf("1 - Pizza           (130₺)\n");
                    printf("2 - Hamburger       (210₺)\n");
                    printf("3 - Durum            (70₺)\n");
                    printf("4 - Cig Kofte        (90₺)\n");
                    printf("5 - Kokorec         (170₺)\n");
                    scanf("%d", &order_choice);
                    getchar();

                    printf("\n\nCustomer Name\n\n> ");
                    fgets(customer_name, sizeof(customer_name), stdin);
                    customer_name[strcspn(customer_name, "\n")] = '\0';

                    printf("\n\nCustomer Address\n\n> ");
                    fgets(customer_address, sizeof(customer_address), stdin);
                    customer_address[strcspn(customer_address, "\n")] = '\0';

                    switch(order_choice) {
                        case 1:
                            strcpy(order_details, "Pizza");
                            cost = 130;
                            break;
                        case 2:
                            strcpy(order_details, "Hamburger");
                            cost = 210;
                            break;
                        case 3:
                            strcpy(order_details, "Durum");
                            cost = 70;
                            break;
                        case 4:
                            strcpy(order_details, "Cig Kofte");
                            cost = 90;
                            break;
                        case 5:
                            strcpy(order_details, "Kokorec");
                            cost = 170;
                            break;
                        default:
                            printf("[CLIENT]: Gecersiz secim! \n");
                            continue;
                    }


                    bzero(buffer, sizeof(buffer));
                    snprintf(buffer, sizeof(buffer), "%s,%s,%d,%d,%s", customer_name, order_details, cost, order_status, customer_address);
                    send(sock, buffer, strlen(buffer), 0);
                    printf("[CLIENT]: Siparis sunucuya gonderildi: %s\n", buffer);

                    bzero(buffer, sizeof(buffer));
                    recv(sock, buffer, sizeof(buffer), 0);
                    printf("[SERVER]: %s\n", buffer);

                    break;
                }

            case 2:
                bzero(buffer, sizeof(buffer));
                strcpy(buffer, "2");
                send(sock, buffer, strlen(buffer), 0);

                bzero(buffer, sizeof(buffer));
                recv(sock, buffer, sizeof(buffer), 0);
                printf("[SERVER]: Sipariş Durumu: %s\n", buffer);
                break;

            default:
                printf("[CLIENT]: Lutfen gecerli bir giris yapiniz\n");
                break;
        }
    }

    return 0;
}
