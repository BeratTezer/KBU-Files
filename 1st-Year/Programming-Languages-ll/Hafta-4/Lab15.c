// Write a program in C to store n elements in an array and print the elements using pointer.

#include <stdio.h>

int main() {
    int arr[5], a, *b;
    
    for (int i=0; i<5; i++) {
        printf("Write the number %d: ", i+1);
        scanf("%d", &a);
        b = &a;
        arr[i] = *b;
    }
    
    printf("\n\n");
    
    for (int i=0; i<5; i++) {
        printf("\nThe [%d] number: %d", i, arr[i]);
    }
    
    return 0;
}