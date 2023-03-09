// Using the two positive numbers given in the main function, find the largest common divisor of these numbers using a recursive function

#include <stdio.h>

int LCD(int, int, int, int);

int main() {
    int n1, n2;
    
    printf("Write the first number: ");
    scanf("%d", &n1);
    
    printf("Write the second number: ");
    scanf("%d", &n2);
    
    printf("\nLargest (greatest) common divisor of the numbers: %d", LCD(n1, n2, 1, 0));
    
    return 0;
}

int LCD(int num1, int num2, int tour, int lcd) {
    if (tour<=num1 && tour<=num2) {
        if (num1%tour==0 && num2%tour==0) {
            lcd = tour;
            tour++;
            LCD(num1, num2, tour, lcd);
        } else {
            tour++;
            LCD(num1, num2, tour, lcd);
        }
    } else return lcd;
}