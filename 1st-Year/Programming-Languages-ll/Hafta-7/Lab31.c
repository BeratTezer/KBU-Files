// The program code that identifies whether two string entered from the keyboard are the same or not, 
// and which one is longer as a word.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *char1, *char2;
    
    char1 = (char *)malloc(100 * sizeof(char));
    char2 = (char *)malloc(100 * sizeof(char));
    
    printf("Write your first sentence: ");
    fgets(char1, 100, stdin);
    
    printf("Write your second sentence: ");
    fgets(char2, 100, stdin);
    
    int control = strcmp(char1, char2);
    
    if (control == 0) printf("\nTexts are the same");
    else printf("\nText are different");
    
    return 0;
}