#include <stdio.h>

void main() {
    int a, b=0, c=0;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    while (c<10) {
        c++;
        b+=a;
    }
    
    printf("\n\n%d",b);
    
}