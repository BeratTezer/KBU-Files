#include <stdio.h>

void main() {
    int a, b, c, d;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    printf("\nPlease write a number: ");
    scanf("%d", &b);
    printf("\nPlease write a divider: ");
    scanf("%d", &d);
    
    if (a>b) {
        
    } else {
        a = c;
        a = b;
        b = c;
    }
    
    while(1) {
        if (b%d==0) {
            printf("\n%d", b*b);
        }
        b++;
        if (a==b) {
            break;
        }
    }
}