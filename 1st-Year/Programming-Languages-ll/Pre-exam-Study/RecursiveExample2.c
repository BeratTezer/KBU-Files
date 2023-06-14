// Write a program in C to print the array elements using recursion

#include <stdio.h>
#include <stdlib.h>

int naturalNumber(int *array, int size, int index);

void main() {
    int i, n;

    printf("How many elements will you want in your array?.\n> ");
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * (n-1));

    for (i = 0;i <= (n-1);i++) {
        printf("[%d]: ", i);
        scanf("%d", arr+i);
    }
    
    printf("\n\nNow your array will write by recursive function.\n");

    naturalNumber(arr, n, 0);
}

int naturalNumber(int *array, int size, int index) {
    if (index < size) {
        printf("%d: %d\n", index, *(array+index));
        return naturalNumber(array, size, index+1);
    }
}