// Write a C program to find GCD (HCF) of two numbers using recursion

#include <stdio.h>

int GCD(int, int, int, int);

int main() {
    int number1, number2;
    
    printf("Please write a number for Greatest Common Divider calcutaion: ");
    scanf("%d", &number1);
    printf("Please write the other number: ");
    scanf("%d", &number2);
    
    if (number1 < number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }
    
    printf("Greatest Common Divider of [%d] and [%d] = %d", number1, number2, GCD(number1, number2, 1, 1));
    
    return 0;
}

int GCD(int number1, int number2, int tour, int gcd) {
    if (tour < number1) {
        if (number1 % tour == 0 && number2 % tour == 0) gcd = tour;
        GCD(number1, number2, ++tour, gcd);
    } else {
        return gcd;
    }
}