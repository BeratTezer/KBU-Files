#include <stdio.h>

void main ()
{
    int n=0, number, upperLimit, counter=1, control=0;
    
    printf("Please write a upper limit: ");
    scanf("%d", &upperLimit);
    
    for (n; n<upperLimit; n++) {
        counter = 1;
        control = 0;
        number = n;
        for (counter; counter<=number; counter++) {
            if (number%counter==0) {
                control+=counter;
            }
        }
        
        if (control == 2*number) {
            printf("\n%d is a perfect number", number);
        }
    }
}