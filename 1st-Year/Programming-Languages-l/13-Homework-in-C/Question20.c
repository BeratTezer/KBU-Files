#include <stdio.h>
#include <math.h>

void main() {
    int a, b=0;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    b = (int)log10(a) + 1;
    
    printf("\nLength of the number is: %d", b);
}