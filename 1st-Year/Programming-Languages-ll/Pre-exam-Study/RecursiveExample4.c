// Write a program in C to get the largest element of an array using recursion

#include <stdio.h>
#include <stdlib.h>

void biggestElement(int *array, int size, int index, int biggest);

void main() {
    int i, n;

    printf("How many elements will you want in your array?.\n> ");
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * (n-1));

    for (i = 0;i <= (n-1);i++) {
        printf("[%d]: ", i);
        scanf("%d", arr+i);
    }
    
    printf("\n\nNow your array will find biggest element using by recursive function.\n");

    biggestElement(arr, n, 0, arr[0]);
}

void biggestElement(int *array, int size, int index, int biggest) {
    if (index <= size) {
        if (biggest < *(array+index)) biggest = *(array+index);
        return biggestElement(array, size, index+1, biggest);
    }
    printf("\nBiggest elemnt of this element is %d\n", biggest);
}