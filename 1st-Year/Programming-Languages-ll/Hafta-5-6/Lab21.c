// Allocate the minimum char memory space required for your name and surname using the malloc function.
// Then use the strcpy function to write your name and surname with spaces to this variable.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    
    str = (char*)malloc(20 * sizeof(char));
    
    if (str == NULL) {
        printf("\nCould not allocate space in memory");
    } else {
        strcpy(str, "Ben Neb ");
    }
    
    printf("Name: %s", str);
    
    return 0;
}