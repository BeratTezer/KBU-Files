#include <stdio.h>

void main() {
    int a;
    double b;
    
    printf("Please write a length value: ");
    scanf("%d", &a);
    
    b = a * 30.48;
    
    printf("\n\nCentimeter value is: %lf", b);
}