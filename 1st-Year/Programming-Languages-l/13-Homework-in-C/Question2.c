#include <stdio.h>

void main() {
    int a;
    
    printf("Please write a radius value: ");
    scanf("%d", &a);
    
    printf("\n\nThe area of the circle is: %f", (3.14*a*a));
}