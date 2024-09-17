#include <stdio.h>

int toplam(int n) {
    if (n==0) return 0;
    else return n + toplam(n-1);
}

int main() {
    printf("[10]'a kadar olan sayıların toplamı: %d", toplam(10));
	return 0;
}
