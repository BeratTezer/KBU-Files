#include <stdio.h>
#include <math.h>

void main() {
    int a, b, c=1;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    b = (int)log10(a) + 1;
    
    for (c; c<=b; c++) {
        printf("%d ", a%10);
        a = a/10;
    }
}