#include <stdio.h>

void main() {
    int a, b=1;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    for (b; b<=10; b++) {
        printf("%d x %d = %d\n", a, b, a*b);
    }
}