#include <stdio.h>

void main() {
    int a=1, b, c;
    
    printf("Please write a number: ");
    scanf("%d", &c);
    printf("Please write a number: ");
    scanf("%d", &b);
    
    while (b<=c) {
        printf("%d\n", b);
        b++;
    }
}