#include <stdio.h>

void main() {
    int a;
    
    printf("Please write a temperature value: ");
    scanf("%d", &a);
    
    if (a>0) {
        printf("\n\nThis value is higher than freezing point");
    } else {
        printf("\n\nThis value is lower than freezing point");
    }
}