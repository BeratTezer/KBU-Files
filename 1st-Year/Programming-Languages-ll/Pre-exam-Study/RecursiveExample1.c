// Write a program in C to print the first 50 natural numbers using recursion

#include <stdio.h>

int naturalNumber(int last);

void main() {
    int number;

    printf("Write a number and program will print all natural numbers up to it.\n> ");
    scanf("%d", &number);

    naturalNumber(number);
}

int naturalNumber(int last) {
    static int i = 0;
    if (i < last) {
        printf("%d\n", i);
        i++;
        return naturalNumber(last);
    }
    return printf("%d\n", i);
}