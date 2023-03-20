// Write a C program to find reverse of any number using recursion

#include <stdio.h>

int reverser(int);

int main() {
    int number;
    
    printf("Write a number to find it reverse: ");
    scanf("%d", &number);
    
    printf("Reverse of the number: ");
    reverser(number);
    
    return 0;
}

int reverser(int number) {
    if (number/10 < 1) printf("%d",number%10);
    else {
        printf("%d",number%10);
        reverser(number/10);
    }
    
}