#include <stdio.h>
#include <stdlib.h>

int main() {
    struct complex {
        int real;
        int imaginary;
    };
    
    struct complex number1;
    number1.real = 10;
    number1.imaginary = 5;
    
    printf("%d + %di\n\n", number1.real, number1.imaginary);
    
    struct complex* number2;
    number2 = (struct complex*)malloc(sizeof(struct complex));
    number2->real = 12;
    number2->imaginary = 15;
    
    printf("%d + %di\n\n", number2->real, number2->imaginary);
    
    // We can reach the members of a structure with "." or "->"(if structure defined as pointer). 
    
    return 0;
}