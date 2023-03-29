#include <stdio.h>

int divider(int num1, int num2);

int main() {
    int a, b;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    printf("Please write second: ");
    scanf("%d", &b);
    
    printf("Result of this %d/%d = %d", a, b, divider(a, b));
    
    return 0;
}

int divider(int num1, int num2) {
    static int result = 0;
    if (num1 - num2 >= 0) {
        result += 1;
        divider(num1-num2, num2);
    } else return result;
}