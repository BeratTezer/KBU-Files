#include <stdio.h>
#include <math.h>

void main () {
    int x, sum=0;
    
    printf("Please write a number: ");
    scanf("%d", &x);
    
    sum += x + pow(x, 3) + pow(x, 5) + pow(x, 7) + pow(x, 9);
    
    printf("\n\n%d is sum of the series.", sum);
    
}