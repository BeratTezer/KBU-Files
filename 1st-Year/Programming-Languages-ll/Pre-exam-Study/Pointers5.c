// Write a program in C to print the elements of an array in reverse order

#include <stdio.h>
#include <stdlib.h>

void main() {
    int *arr;
    int n, temp;

    printf("How many element will be in your array?\n> ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int)*n);

    for (int i = 0;i <= (n-1);i++) {
        printf("[%d]: ", i);
        scanf("%d", arr+i);
    }

    for (int i=0;i<=(n/2);i++) {
        temp = *(arr+i);
        *(arr+i) = *(arr+(n-1-i));
        *(arr+(n-1-i)) = temp;
    }

    printf("\nReversed version of the array\n");

    for (int i=0;i<=(n-1);i++) {
        printf("[%d]: %d\n", i, *(arr+i));
    }

    free(arr);
}