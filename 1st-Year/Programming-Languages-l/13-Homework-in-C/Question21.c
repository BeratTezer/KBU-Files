#include <stdio.h>
#include <math.h>

void main() {
    int a, b, c;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    c = a%10;
    
    b = (int)(a / pow(10, (int)log10(a)));
    
    printf("\nFirst digit of the number is: %d", c);
    printf("\nLast digit of the number is: %d", b);
}