#include <stdio.h>

void main() {
    int a=6, b=10, c=1;
    
    for (c; c<=b; c++) {
        printf("%d x %d = %d\n", a, c, a*c);
    }
}