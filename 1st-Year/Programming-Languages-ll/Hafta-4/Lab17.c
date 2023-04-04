// Write a program in C to swap elements using call by reference.

#include <stdio.h>

int main() {
    int a1, a2, a3, *p1, *p2, *p3, temp;
    
    printf("Write the first number: ");
    scanf("%d", &a1);
    
    printf("Write the second number: ");
    scanf("%d", &a2);
    
    printf("Write the third number: ");
    scanf("%d", &a3);
    
    p1 = &a1;
    p2 = &a2;
    p3 = &a3;
    
    temp = *p1;
    *p1 = *p3;
    *p3 = *p2;
    *p2 = temp;
    
    printf("The first number: %d\n", a1);
    printf("The second number: %d\n", a2);
    printf("The third number: %d", a3);
    
    return 0;
}