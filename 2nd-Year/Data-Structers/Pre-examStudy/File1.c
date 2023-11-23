#include <stdio.h>

int main() {
    struct complex {
        int real;
        int imaginary;
    };
    
    struct complex z1, z2, z3, z4;
    
    z1.real = 5;
    z1.imaginary = 10;
    z2.real = 2;
    z2.imaginary = 4;
    z3.real = 3;
    z3.imaginary = 6;
    z4.real = 7;
    z4.imaginary = 14;
    
    printf("%di + %d\n", z1.real, z1.imaginary);
    printf("%di + %d\n", z2.real, z2.imaginary);
    printf("%di + %d\n", z3.real, z3.imaginary);
    printf("%di + %d\n", z4.real, z4.imaginary);
    
    return 0;
}