// Write a program in C to Calculate the length of the string using a pointer.

#include <stdio.h>

int main() {
    char string[10], *start, *end;
    int i=0;
    start = string;
    
    printf("Write anything: ");
    fgets(string, 10, stdin);
    
    while (string[i] != '\0') {
        end = &string[i];
        i++;
    }
    
    printf("Length: %ld", end-start);
    
    return 0;
}