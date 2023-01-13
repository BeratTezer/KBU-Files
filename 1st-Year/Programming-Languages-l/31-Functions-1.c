#include<stdio.h>

void biggestTwoNumbers(int array[10]) {
    int i, a = array[0], b = array[0];
    for (i = 0;i < 10;i++) {
        if (array[i] > a) {
            b = a;
            a = array[i];
        } else if (array[i] > b) {
            b = array[i];
        }
    }
    printf("The biggest number: %d\nSecond biggest number: %d", a,b);
}

int main() {
    int i, userArray[10];
    
    for (i = 0;i < 10;i++) {
        printf("\nEnter the array[%d] value: ", i);
        scanf("%d", &userArray[i]);
    }
    
    biggestTwoNumbers(userArray);
}