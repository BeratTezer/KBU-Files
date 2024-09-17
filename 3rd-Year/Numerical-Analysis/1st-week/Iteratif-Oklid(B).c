#include <stdio.h>

int func(int a, int b) {
    int obeb;

    if (a%b==0 || b%a==0) printf("Obeb: %d", (a<b ? a : b));
    else {
        int small;
        int big;

        if (a>b) {
            big = a;
            small = b;
        } else {
            big = b;
            small = a;
        }

        for (int i=1; i<small; i++) {
            if (big%i==0) obeb = i;
        }

        printf("Obeb: %d", obeb);
    }
}

int main() {
    func(148, 12);
	return 0;
}
