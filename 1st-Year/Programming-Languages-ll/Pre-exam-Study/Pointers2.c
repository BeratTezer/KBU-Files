// Write a program in C to find the factorial of a given number using pointers

#include <stdio.h>
#include <stdlib.h>

void main() {
    int *n1, *result;

    printf("Write a number\n> ");
    scanf("%d", n1);

    result = (int *)malloc(sizeof(int));
    *result = 1;

    for (int i = 1;i <= *n1;i++) *result *= i;

    printf("Factoriel of %d = %d", *n1, *result);

    free(result);
}