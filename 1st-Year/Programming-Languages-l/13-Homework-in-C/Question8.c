#include <stdio.h>

void main() {
    int a, b, c;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    printf("\nPlease write a number: ");
    scanf("%d", &b);
    
    if (a>b) {
        
    } else {
        a = c;
        a = b;
        b = c;
    }
    
    while(b<a) {
        printf("\n%d", b*b);
        b++;
    }
}