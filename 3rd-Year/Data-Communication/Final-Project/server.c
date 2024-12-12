#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sqlite3.h>
#include <arpa/inet.h>

int main( )
{
  char *ip = "127.0.0.1";
  int port = 5566;
  int server_sock, client_sock;
  struct sockaddr_in server_addr, client_addr;
  socklen_t addr_size;
  char buffer[1024];
  int n;
  
  // Database oluşturan c programını çalıştırır.
  int status = system("./createDb");
  if (status == 0) {
      printf("[SERVER.c]: createDb basariyla calistirildi!\n");
  } else {
      printf("[SERVER.c]: createDb'de bir sorun meydana geldi\n");
  }

  server_sock = socket(AF_INET, SOCK_STREAM, 0);
  if (server_sock < 0){
    perror("[SERVER.c]: Socket hatasi");
    exit(1);
  }
  printf("[SERVER.c]: TCP server soketi olusturuldu\n");

  memset(&server_addr, '\0', sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = port;
  server_addr.sin_addr.s_addr = inet_addr(ip);

  n = bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr));
  if (n < 0){
    perror("[SERVER.c]: Bind hatasi");
    exit(1);
  }
  printf("[SERVER.c]: Port numarasi: %d\n", port);

  listen(server_sock, 5);
  printf("[SERVER.c]: Listening...\n");



  while(1){
    addr_size = sizeof(client_addr);
    client_sock = accept(server_sock, (struct sockaddr*)&client_addr, &addr_size);
    printf("[SERVER.c]: Client baglandi\n");

    // veri girdisi
    bzero(buffer, 1024);
    recv(client_sock, buffer, sizeof(buffer), 0);
    printf("[CLIENT]: %s\n", buffer);

    // girdi kaydi 

    // tepki mesaji
    bzero(buffer, 1024);
    strcpy(buffer, "HI, THIS IS SERVER. HAVE A NICE DAY!!!");
    printf("[SERVER.c]: %s\n", buffer);
    send(client_sock, buffer, strlen(buffer), 0);

    // baglanti sona erer
    close(client_sock);
    printf("[SERVER.c]: Client koptu\n\n");

  }

  return 0;
}