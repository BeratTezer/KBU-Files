#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char *sql;

   /* Open database */
   rc = sqlite3_open("shop.db", &db);
   
   if( rc ) {
      fprintf(stderr, "[SERVER]: Database olusturulamadı: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stdout, "[SERVER]: Database olusturma basarili\n");
   }

   /* Create SQL statement */
   sql = "CREATE TABLE ORDERS("  \
      "ID INT PRIMARY KEY     NOT NULL," \
      "CUSTOMER_NAME  TEXT    NOT NULL," \
      "COST           INT     NOT NULL," \
      "ADDRESS        CHAR(50));";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "[SERVER]: SQL hatasi: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "[SERVER]: Tablo basariyla olusturuldu\n");
   }
   sqlite3_close(db);
   return 0;
}