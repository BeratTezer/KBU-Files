#include <stdio.h>

int main()
{
    int firstNumber, secondNumber, countStep, divide;
    
    printf("Please write two number. First one must be lower than the second one. Step number can't bigger than first number\n\n");
    
    printf("First number\n#> ");
    scanf("%d", &firstNumber);
    printf("\nSecond number\n#> ");
    scanf("%d", &secondNumber);
    printf("\nPlease write a step number\n#> ");
    scanf("%d", &countStep);

    if (secondNumber<=firstNumber) {
        printf("\n\nYou made a mistake, try again\n\n");
    }
    else if (countStep>(secondNumber-firstNumber)) {
        printf("\n\nYou made a mistake, try again\n\n");
    }
    else {
        printf("\n\nWe will start from your first number and go step by step to the other, let's start\n\n");
        divide = (secondNumber - firstNumber) / countStep;
        while (firstNumber<=secondNumber) {
            printf("|> %d\n", firstNumber);
            firstNumber+=divide;
        }
    }
}
