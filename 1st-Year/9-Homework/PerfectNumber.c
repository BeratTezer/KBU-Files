#include <stdio.h>

int main() {
    int number, total=0, counter=1;
    
    printf("Please write a number\n\n#> ");
    scanf("%d", &number);
    
    while (counter<number) {
        if (number%counter==0) {
            total+=counter;
        }
        counter++;
    }
    
    if (total==number) {
        printf("\n\n%d is perfect number\n", number);
    }
    else {
        printf("\n\n%d isn't perfect number\n", number);
    }
}