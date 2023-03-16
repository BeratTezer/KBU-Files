// Write a C program to find LCM of two numbers using recursion

#include <stdio.h>

int LCM(int, int, int, int);

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
    
    printf("Greatest Common Divider of [%d] and [%d] = %d", number1, number2, LCM(number1, number2, 1, 1));
    
    return 0;
}

int LCM(int number1, int number2, int tour, int lcm) {
    if (tour <= (number1*number2)) {
        if (tour % number1 == 0 && tour % number2 == 0) {
            lcm = tour;
            return lcm;
        }
        LCM(number1, number2, ++tour, lcm);
    } else {
        return lcm;
    }
}