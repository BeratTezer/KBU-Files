#include <stdio.h>

void main() {
    int a=1, b, c=1;
    
    printf("Please write a number: ");
    scanf("%d", &b);
    
    while (c<=b) {
        a*=c;
        c++;
    }
    
    printf("%d",a);
}