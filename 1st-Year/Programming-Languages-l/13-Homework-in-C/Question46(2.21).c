#include <stdio.h>

void main () {
    int sum=0, n, counter=1;
    
    printf("Please write a number: ");
    scanf("%d", &n);
    
    while(counter<n) {
        sum += counter;
        counter++;
    }
    printf("%d is sum of the numbers", sum);
}