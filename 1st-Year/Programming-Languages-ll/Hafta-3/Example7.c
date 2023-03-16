// Write a C program to find power of any number using recursion

#include <stdio.h>

int powerCalculator(int, int);

int main() {
    int number, power;

    printf("Please write the number: ");
    scanf("%d", &number);
    printf("\nPlease write the power value: ");
    scanf("%d", &power);


    printf("\n\n%d^%d = %d ", number, power, powerCalculator(number, power));

    return 0;
}

int powerCalculator(int number, int power) {
    if (power == 1) return number;
    else {
        return number * powerCalculator(number, power - 1);
    }
    
}