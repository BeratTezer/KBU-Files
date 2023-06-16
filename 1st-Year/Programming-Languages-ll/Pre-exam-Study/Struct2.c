// Write a program to add, subtract and multiply two complex numbers using structures to function

#include <stdio.h>

struct complex {
    int imag;
    int reel;
};

struct complex SUM(struct complex a, struct complex b);
struct complex SUB(struct complex a, struct complex b);
struct complex MUL(struct complex a, struct complex b);

void main() {
    struct complex number1 = {5, 10};
    struct complex number2 = {2, 8};

    struct complex result1 = SUM(number1, number2);
    struct complex result2 = SUB(number1, number2);
    struct complex result3 = MUL(number1, number2);

    printf("First number: %di and %d\nSecond number: %di and %d\n\nSum of them: %di and %d\nSubtract of them: %di and %d\nMultiply of them: %di and %d\n", number1.imag, number1.reel, number2.imag, number2.reel, result1.imag, result1.reel, result2.imag, result2.reel, result3.imag, result3.reel);
}

struct complex SUM(struct complex a, struct complex b) {
    struct complex result;
    result.reel = a.reel + b.reel;
    result.imag = a.imag + b.imag;
    return result;
};

struct complex SUB(struct complex a, struct complex b) {
    struct complex result;
    result.reel = a.reel - b.reel;
    result.imag = a.imag - b.imag;
    return result;
};

struct complex MUL(struct complex a, struct complex b) {
    struct complex result;
    result.reel = a.reel*b.reel - a.imag*b.imag;
    result.imag = a.imag*b.reel + a.reel*b.imag;
    return result;
};