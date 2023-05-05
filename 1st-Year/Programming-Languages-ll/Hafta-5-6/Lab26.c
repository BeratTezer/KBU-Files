// By taking the total number of elements from the user, take the necessary place by using the calloc function
// from memory. The number of elements in this memory area you allocate is taken from the user. Then find
// the largest value entered using the pointer variable you have defined and print it on the screen.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int max, i, n, *arr;
    
    printf("How man element will contain your array?\n> ");
    scanf("%d", &n);
    
    arr = (int *)calloc(n, sizeof(n));
    
    for (i=0; i<n; i++) {
        printf("\n[%d]> ", i);
        scanf("%d", arr+i);
        
        if (i==0) max = *(arr);
        else {
            if (*(arr+i) > max) max = *(arr+i);
        }
    }
    
    printf("\n\nMax value of array: %d", max);
    
    return 0;
}