#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, length, repetition, *arr;
    
    printf("How many number will contain your array?\n> ");
    scanf("%d", &length);
    
    arr = (int *)malloc(length*sizeof(int));
    
    for (i=0; i<length; i++) {
        printf("\n[%d]: ", i+1);
        scanf("%d", arr+i);
    }
    
    printf("How many times will your number repeat?\n> ");
    scanf("%d", &repetition);
    
    


    return 0;
}
