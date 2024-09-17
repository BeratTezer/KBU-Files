#include <stdio.h>

// integer b must be bigger number
int obeb(int a, int b) {
    int r = b%a;

    if (r==0) {
        return a;
    } else {
        return obeb(r,a);
    }
}

int main() {
    printf("[12, 148]: %d", obeb(12,148));

	return 0;
}
