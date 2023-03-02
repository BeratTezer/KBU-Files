#include <stdio.h>
#define MAX_OGRENCI 100

int hesapla(int, int);

int main() {
    int gecme_notu, ogrenci_sayisi, kalan_sayisi;
    
    printf("Gecme notunu giriniz: ");
    scanf("%d", &gecme_notu);
    
    while (1) {
        printf("\nOgrenci sayisini giriniz: ");
        scanf("%d", &ogrenci_sayisi);
        if (ogrenci_sayisi <= MAX_OGRENCI) break;
        else {
            printf("\n\nGirilebilecek en yuksek ogrenci sayisini astiniz. Tekrar deneyiniz.\n\n");
        }
    }
    
    kalan_sayisi = hesapla(ogrenci_sayisi, gecme_notu);
    
    printf("\nKalan ogrenci sayisi: %d", kalan_sayisi);
    printf("\nGecen ogrenci sayisi: %d", ogrenci_sayisi - kalan_sayisi);
    
    return 0;
}

int hesapla(int ogrenci_sayisi, int gecme_notu) {
    int i, not_listesi[100], kalan_sayisi=0, toplam=0;
    
    for (i=0; i<ogrenci_sayisi; i++) {
        printf("[%d] sirali ogrencinin notu: ", i+1);
        scanf("%d", &not_listesi[i]);
        
        if (not_listesi[i] < gecme_notu) {
            kalan_sayisi += 1;
        }
    }
    
    return kalan_sayisi;
}
