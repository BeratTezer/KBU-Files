#include <stdio.h>
#include <math.h>

void main () {
    int number, numberClon, counter=0, counter2=1, digit, length, sum=0, temp=1;
    
    printf("Please write a number: ");
    scanf("%d", &number);
    
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
        printf("%d is a Strong Number", numberClon);
    } else {
        printf("%d isn't a Strong Number", numberClon);
    }
}