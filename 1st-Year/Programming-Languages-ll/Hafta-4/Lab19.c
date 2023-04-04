// Write a program in C to print a string in reverse using a pointer.

#include <stdio.h>

int main() {
    char string[100], *end;
    int i=0;
    
    printf("Write a text: ");
    fgets(string, 100, stdin);
    
    end = string;
    
    while (string[i] != '\0') {
        end++;
        i++;
    }
    
    for (i; i>=0; i--) {
        printf("%c", *end);
        end--;
    }
    
    return 0;
}