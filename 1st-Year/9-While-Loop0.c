#include <stdio.h>

int main()
{
    int firstNumber, secondNumber;
    
    printf("Please write two number. First one must be lower than the second one.\n\n");
    
    printf("First number\n#> ");
    scanf("%d", &firstNumber);
    printf("\nSecond number\n#> ");
    scanf("%d", &secondNumber);

    if (secondNumber<=firstNumber) {
        printf("\n\nYou made a mistake, try again\n\n");
    }
    else {
        printf("\n\nWe will start from your first number and go step by step to the other, let's start\n\n");
        while (firstNumber<=secondNumber) {
            printf("|> %d\n", firstNumber);
            firstNumber++;
        }
    }
}
