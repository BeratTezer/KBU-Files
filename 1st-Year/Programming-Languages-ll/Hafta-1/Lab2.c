#include <stdio.h>

int vki_hesapla(int, int);

int main() {
    int kilo, sonuc;
    float boy;
    
    printf("Boyunuzu giriniz(m): ");
    scanf("%f", &boy);
    printf("Kilonuzu giriniz(kg): ");
    scanf("%d", &kilo);
    
    sonuc = vki_hesapla(boy, kilo);
    
    if (sonuc == 1) printf("\n\nSonuc: Zayif\n\n");
    else if (sonuc == 2) printf("\n\nSonuc: Zayif\n\n");
    else if (sonuc == 3) printf("\n\nSonuc: Zayif\n\n");
    else printf("\n\nSonuc: Zayif\n\n");
    
    return 0;
}

int vki_hesapla(int boy, int kilo) {
    if (kilo / (boy*boy) < 18) return 1;
    else if (kilo / (boy*boy) > 18 && kilo / (boy*boy) < 26) return 2;
    else if (kilo / (boy*boy) >= 26 && kilo / (boy*boy) <= 30) return 3;
    else return 4;
}