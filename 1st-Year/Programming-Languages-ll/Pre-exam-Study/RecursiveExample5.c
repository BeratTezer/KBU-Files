// Write a program in C to find the LCM of two numbers using recursion

#include <stdio.h>

int LCM(int number1, int number2, int result, int count);

void main() {
    int n, m;

    printf("Firts number\n> ");
    scanf("%d", &n);

    printf("Second number\n> ");
    scanf("%d", &m);
    
    printf("\nLCM of %d and %d is: %d\n", n, m, LCM(n, m, 1, 1));
}

int LCM(int number1, int number2, int result, int count) {
    if (count == number1 || count == number2) {
        return result;
    } else if (number1 % count == 0 || number2 % count == 0) {
        if (number1 % count == 0 && number2 % count == 0) return LCM(number1, number2, result*count*count, count+1);
        else return LCM(number1, number2, result*count, count+1);
    }
    return LCM(number1, number2, result, count+1);
}