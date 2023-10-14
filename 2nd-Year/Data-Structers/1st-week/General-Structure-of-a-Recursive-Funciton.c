#include <stdio.h>

int main() {
    int factorial(int n) {
        if (n == 0) return 1;
        else return n*factorial(n-1);
    }
    
    printf("%d", factorial(5));
    
    return 0;
}