#include <stdio.h>

void main() {
    int a;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    
    if (a%2==0) {
        printf("\n\nThis number is an even number");
    } else {
        printf("\n\nThis number is an odd number");
    }
}