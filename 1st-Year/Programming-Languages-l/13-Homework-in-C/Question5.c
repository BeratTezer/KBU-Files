#include <stdio.h>

void main() {
    int a;
    
    double b;
    
    printf("Please write a fahrenheit value: ");
    scanf("%d", &a);
    
    b = (a - 32) * 1.8;
    
    printf("\n\nCelcius value is: %lf", b);
}