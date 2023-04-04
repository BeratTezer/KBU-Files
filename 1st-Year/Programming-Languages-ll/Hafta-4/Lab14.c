// Write a program in C to add two numbers using pointers.

#include <stdio.h>

int main() {
    int num1, num2, *x, *y;
    
    printf("Write the first number: ");
    scanf("%d", &num1);
    
    printf("Write the second number: ");
    scanf("%d", &num2);
    
    x = &num1;
    y = &num2;
    
    printf("\n\n%d + %d = %d", num1, num2, *x + *y);
    
    return 0;
}