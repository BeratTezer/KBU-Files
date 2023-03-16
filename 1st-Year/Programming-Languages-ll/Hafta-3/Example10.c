// Write a C program to check whether a number is palindrome or not using recursion

#include <stdio.h>

int palindromeController(int num, int reversedNumber) {
    if (num == 0) {
        return reversedNumber;
    }
    reversedNumber = reversedNumber * 10 + num % 10;
    num /= 10;
    return palindromeController(num, reversedNumber);
}

int main() {
    int number, reversedNumber;
    printf("Enter a number: ");
    scanf("%d", &number);
    reversedNumber = palindromeController(number, 0);
    if (reversedNumber == number) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
    return 0;
}