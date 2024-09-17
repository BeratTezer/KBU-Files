#include <stdio.h>

int obeb(int a, int b) {
    int r = b%a;

    while(r!=0) {
        b = a;
        a = r;
        r = b%a;
    }

    return a;
}

int main() {
    printf("[12, 148]: %d", obeb(6,9));

	return 0;
}
