#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(); 
void ogrenciAra();
void kayitEkle();
void dosyaOlustur();
void listele();

struct Ogrenci {
    int ogrenci_no;
    char isim[50];
    char bolum[50];
};

struct Node {
        int data;
        struct Node* next;
};

int main() {
    menu();
    return 0;
}

void menu() {
    int secim;
    
    while (1) {
        printf("\n--- MENÜ ---\n");
        printf("1. Dosya Olustur\n");
        printf("2. Kayit Ekle\n");
        printf("3. Ogrenci Ara\n");
        printf("4. Listele\n");
        printf("5. Cikis\n");
        printf("Seciminizi yapiniz: ");
        scanf("%d", &secim);
        
        switch (secim) {
            case 1:
                dosyaOlustur();
                break;
            case 2:
                kayitEkle();
                break;
            case 3:
                ogrenciAra();
                break;
            case 4:
                listele();
                break;
            case 5:
                printf("Program sonlandiriliyor.\n");
                exit(0);
            default:
                printf("Gecersiz secim. Tekrar deneyin.\n");
                break;
        }
    }
}

void dosyaOlustur() {
    FILE *dosya;
    dosya = fopen("ogrenciler.dat", "w");
    if (dosya == NULL) {
        printf("Dosya oluşturulamadi.\n");
        return;
    }
    fclose(dosya);
    printf("Dosya oluşturuldu.\n");
}

void kayitEkle() {
    struct Ogrenci ogrenci;
    FILE *dosya;
    dosya = fopen("ogrenciler.dat", "a");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return;
    }
    
    printf("Ogrenci No: ");
    scanf("%d", &ogrenci.ogrenci_no);
    printf("İsim: ");
    scanf("%s", ogrenci.isim);
    printf("Bolum: ");
    scanf("%s", ogrenci.bolum);
    
    fwrite(&ogrenci, sizeof(struct Ogrenci), 1, dosya);
    
    fclose(dosya);
    printf("Kayit eklendi.\n");
}

void ogrenciAra() {
    int aranan_no;
    struct Ogrenci ogrenci;
    FILE *dosya;
    dosya = fopen("ogrenciler.dat", "rb");
    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return;
    }
    
    printf("Aranan Ogrenci No: ");
    scanf("%d", &aranan_no);
    
    while (fread(&ogrenci, sizeof(struct Ogrenci), 1, dosya)) {
        if (ogrenci.ogrenci_no == aranan_no) {
            printf("Ogrenci No: %d\n", ogrenci.ogrenci_no);
            printf("İsim: %s\n", ogrenci.isim);
            printf("Bolum: %s\n", ogrenci.bolum);
            fclose(dosya);
            return;
        }
    }
    
    printf("Ogrenci bulunamadi.\n");
    fclose(dosya);
}

void listele() {
    FILE* file = fopen("ogrenciler.dat", "r");
    if (file == NULL) {
        printf("Dosya acma hatasi!");
        return;
    }

    int veri;
    struct Node* head;

    while (fscanf(file, "%d", &veri) != EOF) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = veri;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            struct Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    fclose(file);

    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    temp = head;
    while (temp != NULL) {
        struct Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
}