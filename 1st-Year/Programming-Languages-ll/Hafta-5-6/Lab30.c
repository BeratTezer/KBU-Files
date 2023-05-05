#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int s;
    char *text;
    
    text = (char *)malloc(100 * sizeof(char));
    
    printf("Write your sentence: ");
    fgets(text, 100, stdin);

    for (s=strlen(text)-1; s>=0; s--) {
        printf("%c", *(text+s));
    }
    
    free(text);
    
    return 0;
}