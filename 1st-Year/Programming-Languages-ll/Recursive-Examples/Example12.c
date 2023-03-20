// Write a C program to generate nth Fibonacci term using recursion

#include <stdio.h>

int fibonacci(int, int, int, int);

int main() {
    int number;
    
    printf("Please write a number: ");
    scanf("%d", &number);
    
    printf("Fibonacci value in row: [%d] = %d", number, fibonacci(number, 1, 0, 1));
    
    return 0;
}

int fibonacci(int tour, int currentTour, int lastValue, int currentValue) {
    int temp=0;
    if (currentTour<tour) {
        temp = lastValue;
        lastValue = currentValue;
        currentValue += temp;
        currentTour++;
        fibonacci(tour, currentTour, lastValue, currentValue);
    } else {
        return currentValue;
    }
}