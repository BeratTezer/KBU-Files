// Write a program in C to compute the sum of all elements in an array using pointers

#include <stdio.h>
#include <stdlib.h>

void main() {
    int *arr;
    int n, sum=0;

    printf("How many element will be in your array?\n> ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int)*n);

    for (int i = 0;i <= (n-1);i++) {
        printf("[%d]: ", i);
        scanf("%d", arr+i);
    }

    for (int i=0;i<=(n-1);i++) {
        sum += *(arr+i);
    }

    printf("\nSum of the array: %d", sum);

    free(arr);
}