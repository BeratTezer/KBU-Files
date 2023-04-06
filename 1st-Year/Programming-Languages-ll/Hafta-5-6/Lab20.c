// By taking the total number of elements from the user, take the necessary place by using the calloc 
// function from memory. The number of elements in this memory area you allocate is taken from the user. 
// Then find the largest value entered using the pointer variable you have defined and print it on the screen.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, elementNum, *arr;
    
    printf("How many element will you write?\n-> ");
    scanf("%d", &elementNum);
    
    arr = (int*)calloc(elementNum, sizeof(int));
    
    if (arr == NULL) {
        printf("\n\nUnfortunately, couldn't allocate space in memory");
        exit(0);
    }
    
    for (i=0; i<elementNum; i++) {
        printf("[%d]: ", i+1);
        scanf("%d", arr+i);
    }
    
    for (i=0; i<elementNum; i++) {
        if (*arr < *(arr+i)) {
            *arr = *(arr+i);
        }
    }
    
    printf("\nBiggest element of the array: %d", *arr);
    free(arr);
    
    return 0;
}