#include <stdio.h>
#include <math.h>

void main () {
    int upperLimit, number, numberClon, counter0=1, counter=0, counter2=1, digit, length, sum=0, temp=1;
    
    printf("Please write a upperLimit: ");
    scanf("%d", &upperLimit);
    
    for (counter0; counter0<upperLimit; counter0++) {
        number = counter0;
        numberClon = number;
        length = (int)log10(number) + 1;
        
        for (counter; counter<length; counter++) {
            digit=number%10;
            for (counter2; counter2<=digit; counter2++) {
                temp*=counter2;
            }
            sum+=temp;
            temp=1;
            counter2 = 1;
            number=number/10;
        }
        
        if (numberClon==sum) {
            printf("%d is a Strong Number\n", numberClon);
        }
        
        sum=0;
        counter=0;
    }
}