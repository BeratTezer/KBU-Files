// First, allocate the minimum memory space required for your name with malloc. Then expand this memory
// area with realloc to include your last name.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int name = 12;
    char *nameText;
    
    nameText = (char *)malloc(6*sizeof(char));
    
    nameText = (char *)realloc(nameText, name*sizeof(char));
    
    strcpy(nameText, "Berat Tezer");
    
    printf("\nResult: %s", nameText);
    
    return 0;
}