#include <stdio.h>

int superscript(int num1, int num2);

int main() {
    int a, b;
    
    printf("Please write a number: ");
    scanf("%d", &a);
    printf("Please write second: ");
    scanf("%d", &b);
    
    printf("Result of this %dx%d = %d", a, b, superscript(a, b));
    
    return 0;
}

int superscript(int num1, int num2) {
    static int result = 1;
    if (num2 > 0) {
        result *= num1;
        superscript(num1, --num2);
    } else return result;
}