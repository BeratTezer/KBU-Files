#include <stdio.h>

void main() {
    int a, b=1;
    float c=0;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    while (b<a) {
        c+=1/b;
        b+=2;
    }
    
    printf("\nSum: %f", c);
}