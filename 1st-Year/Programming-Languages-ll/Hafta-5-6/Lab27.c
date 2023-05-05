// Allocate the minimum char memory space required for your name and surname using the malloc function.
// Then use the strcpy function to write your name and surname with spaces to this variable.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int name = 12;
    char *nameText;
    
    nameText = (char *)malloc(name*sizeof(char));
    
    strcpy(nameText, "Berat Tezer");
    
    printf("\nResult: %s", nameText);
    
    return 0;
}