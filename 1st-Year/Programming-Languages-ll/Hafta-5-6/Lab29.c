// First, define an array and ask the user for array size. Then, get the elements of array from user,
// too. After that, allocate new space in the array and get new elements. Finally, dump the resulting array to
// scree. (Use dynamic memory allocation.)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, n2, i;
    
    printf("Numbers of element: ");
    scanf("%d", &n);
    
    arr = (int *)malloc(n*sizeof(int));
    
    for (i=0; i<n; i++) {
        printf("\n[%d]: ", i);
        scanf("%d", arr+i);
    }
    
    printf("\n\nNumber of elements you will add: ");
    scanf("%d", &n2);
    
    arr = (int *)realloc(arr, (n+n2)*sizeof(int));
    
    for (i=n; i<(n+n2); i++) {
        printf("\n[%d]: ", i);
        scanf("%d", arr+i);
    }
    
    for (i=0; i<(n+n2); i++) printf("\n[%d]: %d", i, *(arr+i));
    
    
    return 0;
}