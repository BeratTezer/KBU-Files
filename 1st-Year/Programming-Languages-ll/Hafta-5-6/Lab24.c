// Write a program using dynamic memory allocation that prints out words of a sentence in reverse order

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, *arr;
    
    printf("How many element will be in your array?\n-> ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n*sizeof(int));
    
    for (i=0; i<n; i++) {
        printf("\n[%d]: ", i+1);
        scanf("%d", arr+i);
    }
    
    printf("\n\nLet's add three more element in your array");
    
    arr = (int*)realloc(arr, (n+3)*sizeof(int));
    
    for (n; n<(i+3); n++) {
        printf("\n[%d]: ", n+1);
        scanf("%d", arr+n);
    }
    
    printf("\n\nLet's see the last version of your array:");
    
    for (i=0; i<n; i++) {
        printf("\n[%d]: %d", i+1, *(arr+i));
    }
    
    
    return 0;
}