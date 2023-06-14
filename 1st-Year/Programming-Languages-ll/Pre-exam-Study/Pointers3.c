// Write a program in C to sort an array using a pointer

#include <stdio.h>
#include <stdlib.h>

void main() {
    int *arr;
    int temp, n;

    printf("How many element will be in your array?\n> ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int)*n);

    for (int i = 0;i <= (n-1);i++) {
        printf("[%d]: ", i);
        scanf("%d", arr+i);
    }

    for (int i=0;i<=(n-1);i++) {
        for (int j=0;j<=(n-1);j++) {
            if (*(arr+i) < *(arr+j)) {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }

    printf("\nSorted version of the array:\n");

    for (int i = 0;i <= (n-1);i++) {
        printf("\n[%d]: %d", i, *(arr+i));
    }
    
    free(arr);
}