// Find the factorial of a input positive number. ( Factorial of a number ( n ) is product of all the integers from 1 to n )

#include <stdlib.h>
#include <stdio.h>

int factorial(int);

int main() {
    int n;

    while (1) {
        printf("Please write a positive number: ");
        scanf("%d", &n);
        if (n<=0) printf("\n\nType Error. You have to write a positive number\n\n");
        else break;
    }

    printf("\n\nFactorial value of %d: %d", n, factorial(n));
}

int factorial(int number) {
    if (number == 1) return number;
    return number *= factorial(number-1);
}