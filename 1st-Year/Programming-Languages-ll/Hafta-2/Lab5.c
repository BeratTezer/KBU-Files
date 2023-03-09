// Write a recursion function to sum the digits of the number given in the main function

#include <stdio.h>

int digSum(int);

int main() {
    int number;
    
    printf("Write a number: ");
    scanf("%d", &number);
    
    printf("\nSum of all digits of the number: %d", digSum(number));
    
    return 0;
}

int digSum(int num) {
    if (num>0) return num%10 + digSum(num/10);
    else return 0;
}