#include <stdio.h>
#include <math.h>
#define MAX_ARRAY_LENGTH 9

void main() {
    float sum=0, dizi[7];
    int i = 0;
    for (i; i<8; i++) {
        // printf("dizi[%d]: ", i);
        printf("Bir float deger girin: ");
        scanf("%f", &dizi[i]);
        sum += dizi[i];
    }
    printf("\n\nBu degerlerin ortalamasi: %f\n\n",sum/8);   
}