#include <stdio.h>
#include <math.h>

// I didn't understand this properly. After my homework I will check this one.

void main () {
    int number;
    float sum=0, controller=1;
    
    printf("Please write a number: ");
    scanf("%d", &number);
    
    while(number!=controller) {
        sum+=1/controller;
        controller++;
    }
    
    printf("%lf is sum of the serie", sum);
}