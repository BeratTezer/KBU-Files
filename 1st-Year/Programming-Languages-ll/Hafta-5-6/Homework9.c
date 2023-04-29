#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, r, rMax = 0, *wanted, length, repetition, *arr;
    
    printf("How many number will contain your array?\n> ");
    scanf("%d", &length);
    
    arr = (int *)malloc(length*sizeof(int));
    wanted = (int *)malloc(length*sizeof(int));
    
    for (i=0; i<length; i++) {
        printf("\n[%d]: ", i+1);
        scanf("%d", arr+i);
    }
    
    printf("\n\nHow many times will your number repeat?\n> ");
    scanf("%d", &repetition);
    
    int wanted_size = 0;
    for (i=0; i<length; i++) {
        r = 0;
        for (j=0; j<length; j++) {
            if (*(arr+i) == *(arr+j)) {
                r++;
            }
        }
        if (r >= rMax) {
            if (r > rMax) {
                rMax = r;
                wanted_size = 0;
            }
            if (r >= repetition) {
                *(wanted+wanted_size) = *(arr+i);
                wanted_size++;
            }
        }
    }
    
    free(arr);
    
    if (wanted_size > 1){
        for (i=0; i<wanted_size; i++) {
            if (*(wanted+i+1) != *(wanted+i)) printf("\n\n>%d< repeated equal or more than %d times.", *(wanted+i), repetition);
            
        }
    } else {
        printf("\n\nThere is no enough repetition");
    }
    
    free(wanted);

    return 0;
}
