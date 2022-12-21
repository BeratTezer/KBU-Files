#include <stdio.h>
#include <math.h>

void main() {
    int sayi, dizi[4], tur=0, atama;
    printf("Max 5 haneli olacak sekilde sayi giriniz: ");
    scanf("%d",&sayi);
    for (tur;tur<=log10(sayi)+2;tur++) {
        atama = sayi%10;   
        dizi[tur] = atama;
        sayi = sayi>10 ? sayi/10 : sayi;
        printf("\nSayinin %d. elemani: %d",tur,dizi[tur]);
    }   
}