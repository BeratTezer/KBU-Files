// Write a C program to print all even or odd numbers in given range using recursion

#include <stdio.h>

int printerInRange(int, int, int);

int main() {
    int number1, number2, evenOdd;

    while (1) {
        printf("Please write the number1: ");
        scanf("%d", &number1);
        printf("\nPlease write the number2: ");
        scanf("%d", &number2);
        if (number1 > number2) printf("\n\nFirst number can't be bigger than second one. Please try again.\n\n");
        else break;
    }
    
    while (1) {
        printf("\nWhich numbers will write? (0 for even, 1 for odd): ");
        scanf("%d", &evenOdd);
        if (evenOdd != 0 && evenOdd != 1) printf("\n\nAnswer must be 0 or 1. Please try again.\n\n");
        else break;
    }
    
    printerInRange(number1, number2, evenOdd);

    return 0;
}

int printerInRange(int number1, int number2, int type) {
    if (number2 >= number1) {
        if (type == 1) {
            if (number2 % 2 == 1) printf("> %d\n", number2);
            else printf("> %d\n", number2 - 1);
        }
        else {
            if (number2 % 2 == 0) printf("> %d\n", number2);
            else printf("> %d\n", number2 - 1);
        }
    }
    printerInRange(number1, number2 - 2, type);
    
    return 0;
}