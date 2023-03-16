// What is the output of the following C program? 

#include <stdio.h>

int toplam(int n) {
    if (n == 1) return n;
    else return (n + toplam(n -1));
}

void main(void) {
    int sayi = 6;
    printf("Sonuc = %d", toplam(sayi));
}

// 21