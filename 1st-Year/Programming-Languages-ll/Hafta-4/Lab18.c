#include <stdio.h>

int main() {
    int i, n, *p;
    
    printf("How many element will be in your array: ");
    scanf("%d", &n);
    
    int arr[n];
    p = arr;
    
    for (i=0; i<n; i++) {
        printf("\n[%d]: ", i);
        scanf("%d", &*(p+i));
    }
    
    for (i=0; i<n; i++) {
        printf("\n%d element of array: %d", i+1, *(p+i));
    }
    
    return 0;
}