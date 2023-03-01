#include <stdio.h>

int recExp(int number, int exponent) {
    if (exponent == 1) return number;
    return number * recExp(number, exponent-1);
}

int main() {
    int number, exponent;
    printf("Write a number: ");
    scanf("%d", &number);
    printf("Write a value for exponention: ");
    scanf("%d", &exponent);
    
    printf("\nResult: %d", recExp(number, exponent));
    
    return 0;
}