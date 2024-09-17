#include <stdio.h>

int toplam(int n, int a) {
    if (a==n) return 0;
    else return a + toplam(n, ++a);
}

int main() {
    printf("[10]'a kadar olan sayıların toplamı: %d", toplam(10,0));
	return 0;
}
