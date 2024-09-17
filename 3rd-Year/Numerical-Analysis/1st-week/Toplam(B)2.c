#include <stdio.h>

int toplam(int l, int r) {
    if(l>r) return 0;
    else if (l==r) return r;
    else return l + r + toplam(l+1, r-1);
}

int main() {
    printf("[10]'a kadar olan sayıların toplamı: %d", toplam(1,10));
	return 0;
}
