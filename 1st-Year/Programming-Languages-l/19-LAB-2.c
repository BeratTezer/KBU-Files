#include <stdio.h>
#include <math.h>
#define MAX_ARRAY_LENGTH 9

void main() {
    int eleman, tur=0, tur2=0, dizi[MAX_ARRAY_LENGTH];
    while (1) {
        printf("\nEleman girin: ");
        scanf("%d", &dizi[tur]);
        if (tur==MAX_ARRAY_LENGTH || dizi[tur]==-1) {
            break;
        }
        tur++;
    }
    for (tur2;tur2<tur;tur2++) {
        printf("\ndizi[%d]: %d elemaninin karesi: %d",tur2,dizi[tur2],dizi[tur2]*dizi[tur2]);
    }
}