// Calculate the sum of all numbers (including this number) up to a natural number given in the main function using a recursive function

#include <stdio.h>

int recursiveSum(int);

int main() {
    int n1;
    
    printf("Write a number: ");
    scanf("%d", &n1);
    
    printf("\n\nSum of all numbers until %d: %d", n1, recursiveSum(n1));
    
    return 0;
}

int recursiveSum(int number) {
    if (number>0) return number + recursiveSum(number-1);
    else return 0;
}