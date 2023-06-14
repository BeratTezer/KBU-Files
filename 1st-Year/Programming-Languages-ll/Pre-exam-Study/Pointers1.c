// Write a program in C to swap elements using call by reference

#include <stdio.h>

void main() {
    int *n1, *n2, *n3;

    printf("Write the first number\n> ");
    scanf("%d", n1);
    
    printf("Write the second number\n> ");
    scanf("%d", n2);
    
    printf("\nBefore swap | n1: %d, n2: %d", *n1, *n2);

    n3 = n1;
    n1 = n2;
    n2 = n3;

    printf("\n\nAfter  swap | n1: %d, n2: %d", *n1, *n2);
}