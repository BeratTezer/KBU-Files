#include <stdio.h>
#include <string.h>
#define MAX_CHARACTER 20

int main() {
    char string1[MAX_CHARACTER], string2[MAX_CHARACTER];
    
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("\nEnter the second string: ");
    scanf("%s", string2);
    
    printf("\n\nAfter concatenation: %s + %s: %s%s", string1, string2, string1, string2);
    
    return 0;
}