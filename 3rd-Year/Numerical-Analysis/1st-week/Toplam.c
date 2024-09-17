#include <stdio.h>

int toplam(int i, int n, int t) {
    if (n==i) return t+i;
    else {
        t += i;

        return toplam(++i, n, t);
    }
}

int main() {
    printf("[10]'a kadar olan sayıların toplamı: %d", toplam(0,10,0));
	return 0;
}
