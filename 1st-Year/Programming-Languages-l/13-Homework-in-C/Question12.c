#include <stdio.h>

void main() {
    int a, b, c;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    printf("Please write the step number: ");
    scanf("%d", &b);
    
    c=b;
    
    for (c; c<a; c+=b) {
        printf("\n%d",c);
    }
    
}