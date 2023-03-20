// Write a C program to find sum of digits of a given number using recursion

#include <stdio.h>
#include <math.h>

int sumDigit(int);

int main() {
    int number;
    
    printf("Please write a number: ");
    scanf("%d", &number);
    
    printf("\n\nSum of the digits: %d", sumDigit(number));
    
    return 0;
}

int sumDigit(int number) {
    int sum=0;
    if (log(number)+1 >= 1) return sum += number%10 + sumDigit(number/10);
    else return sum;
}