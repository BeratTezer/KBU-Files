#include <stdio.h>

void main ()
{
    int number, counter=1, control=0;
    
    printf("Please write a number: ");
    scanf("%d", &number);
    
    for (counter; counter<=number; counter++) {
        if (number%counter==0) {
            control+=counter;
        }
    }
    
    if (control == 2*number) {
        printf("\n%d is a perfect number", number);
    } else {
        printf("\n%d isn't a perfect number", number);
    }
}