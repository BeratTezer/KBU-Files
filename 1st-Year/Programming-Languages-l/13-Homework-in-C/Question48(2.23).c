#include <stdio.h>

void main () {
    int d;
    
    printf("Write a decimal number: ");
    scanf("%d", &d);
    
    while (d!=0) {
        if (d%2==0) {
            d/=2;
            printf("0");
        } else {
            d--;
            d/=2;
            printf("1");
        }
    }
    
    printf("\n\nPlease read from bottom");
    
}