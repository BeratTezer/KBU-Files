// Write a program in C to count the digits of a given number using recursion

#include <stdio.h>

int digitCounter(int number);

void main() {
    int n;

    printf("Write a number.\n> ");
    scanf("%d", &n);

    digitCounter(n);
}

int digitCounter(int number) {
    static int digit = 0;
    if (number > 0) {
        digit++;
        return digitCounter(number/10);
    }
    return printf("\nYour number has %d digits.", digit);
}