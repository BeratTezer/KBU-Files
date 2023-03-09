// Write a C program to display all array elements using recursion

#include <stdio.h>

int recursivePrinter(int*, int, int);

int main() {
    int i;
    unsigned int n;

    printf("Let's create an array\n\nHow many element will you write in your array: ");
    scanf("%d", &n);
    
    // This is not ok. This "n" must has a specific value
    int array[n];
    
    for (i=0; i<n; i++) {
        printf("\n[%d]. element of array: ", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\n\nLet's print this array with recursion function\n\n");
    
    recursivePrinter(array, 0, n);
    
    return 0;
}

int recursivePrinter(int* array, int i, int n) {
    if (i < n) {
        printf("\n[%d]: %d", i, array[i]);
        recursivePrinter(array, ++i, n);
    } else return 0;
}