// First, define an array and ask the user for array size. Then, get the elements of array from user,
// too. After that, allocate new space in the array and get new elements. Finally, dump the resulting 
// array to screen. (Use dynamic memory allocation.)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n, *arr;
    
    printf("How many element will be in your array?\n> ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    
    for (i=0; i<n; i++) {
        printf("\n(%3d)> ", i+1);
        scanf("%d", arr+i);
    }
    
    for (i=0; i<n; i++) {
        printf("\n-%d", *(arr+i));
    }
    
    printf("\n\n\nYour array has %d element. How many will you add?\n> ", n);
    scanf("%d", &n);
    
    arr = (int*)realloc(arr, (n+i) * sizeof(int));
    
    for (j=i; j<(n+i); j++) {
        printf("\n(%3d)> ", j+1);
        scanf("%d", arr+j);
    }
    
    printf("\nYour array is: ");
    
    for (j=0; j<(n+i); j++) {
        printf("\n[%d]: %d", j+1, *(arr+j));
    }
    
    
    return 0;
}