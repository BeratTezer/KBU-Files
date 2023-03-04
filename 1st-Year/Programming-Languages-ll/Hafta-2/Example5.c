// User input one positive integer n, Create a function to find sum of all numbers upto n.
// Sum = n+(n-1)+(n-2)… +2+1+0

#include <stdlib.h>
#include <stdio.h>

int sumUntilZero(int);

int main() {
    int n;

    while (1) {
        printf("Please write a positive number: ");
        scanf("%d", &n);
        if (n<=0) printf("\n\nType Error. You have to write a positive number\n\n");
        else break;
    }

    printf("\n\nSum of these numbers from %d to 0: %d", n, sumUntilZero(n));
}

int sumUntilZero(int number) {
    if (number == 0) return number;
    return number += sumUntilZero(number-1);
}