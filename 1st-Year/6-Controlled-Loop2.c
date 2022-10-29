#include <stdio.h>

int main() {
    int number, counter = 1;
    
    printf("Please write a number: ");
    scanf("%d", &number);
    
    while (1) {
        if (number%counter==0) {
            printf("\n%d\n", counter);
            counter++;
        }
        else {
            counter++;
        }
        if (counter>number) {
            break;
        }
    }
}
