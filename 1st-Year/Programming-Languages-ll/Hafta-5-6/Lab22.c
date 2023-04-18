// First, allocate the minimum memory space required for your name with malloc.
// Then expand this memory area with realloc to include your last name.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i;
    char *name;
    
    name = (char*)malloc(6 * sizeof(char));
    
    if (name == NULL) {
        printf("\nCould not allocate space in memory");
    } else {
        strcpy(name, "Berat");
    }
    
    name = (char*)realloc(name, 12 * sizeof(char));
    
    strcpy(name, "Berat Tezer");
    
    for (i=0; i<13; i++) {
        printf("%c", *(name+i));
    }
    
    free(name);

    return 0;
}