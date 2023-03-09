#include <stdio.h>

void fun(int n, int a, int b) {
    if (n<=0) return;
    fun(n-2,a,b+n);
    printf("%d %d %d\n", n, a, b);
}

int main() {
    int n, a, b;
    printf("Write a value for n: ");
    scanf("%d", &n);
    printf("Write a value for a: ");
    scanf("%d", &a);
    printf("Write a value for b: ");
    scanf("%d", &b);
    
    fun(n,a,b);
    
    return 0;
}