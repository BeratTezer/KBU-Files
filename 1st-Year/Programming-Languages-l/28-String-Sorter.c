#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[52] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z'}, words[10][256];
    int i=0, j=0;
    
    printf("Enter 10 words:\n");
    for (i = 0; i < 10; i++) {
        printf("\n#> ");
        scanf("%s", words[i]);
    }


    for (i=0;i<10;i++) {
        for (j=i+1;j<10;j++) {
            int result=strcmp(words[i], words[j]);
            if(result>0) {
                char temp[256];
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
        printf("\n%d) %s",i+1,words[i]);
    }
    
    return 0;
}