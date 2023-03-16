// What is the output of the following C program?

#include <stdio.h>

int fun(int n) {
    if(n == 4) return n;
    else return 2*fun(n+1);
}

int main () {
    printf("%d ", fun(3));
    return 0;
}

// 8