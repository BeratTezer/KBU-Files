#include <stdio.h>

void main() {
    int a, sum=0;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    while (a<2000) {
        printf("%d\n",a);
        sum += a;
        a++;
    }
    
    printf("\nSum: %d", sum);
}