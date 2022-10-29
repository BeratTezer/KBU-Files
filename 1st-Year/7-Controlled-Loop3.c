#include <stdio.h>

int main() {
    int number, oddCounter=0, evenCounter=0, counter=1;
    
    printf("\nPlease write ten number\n");
    
    while (counter<=10) {
        printf("\n%d. number: ", counter);
        scanf("%d", &number);
        if (number%2==0) {
            printf("\nThis number is even\n");
            evenCounter++;
        }
        else {
            printf("\nThis number is odd\n");
            oddCounter++;
        }
        counter++;
    }
    
    printf("\n\nOdd Number of Numbers: %d\n\nEven Number of Numbers: %d", oddCounter, evenCounter);
} 