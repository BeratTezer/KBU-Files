#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <time.h>

#define ALPHABET_SIZE 26 

// ---------------------------------------------
// Bu kod bir Yerine Koyma Şifreleme algoritması
// çalışmasıdır. Her harfin karşılığı rastgele
// olarak atanır. Anahtar değeri harflerin
// rastgele bir permütastonudur.
// Berat Tezer                     19 Mayıs 2024
// ---------------------------------------------

void generateKey(char *arr) {
    srand(time(NULL));
    for (int i = ALPHABET_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    char plainText[100], cypherText[100], decryptedText[100];
    
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char key[ALPHABET_SIZE + 1]; // +1 for null terminator

    // Alfabeyi anahtar değerini hazırlamak için key değişkeni içine kopyalar
    strcpy(key, alphabet);
    
    // printf("        Key Before: %s\n", key);

    // Anahtarı üretir
    generateKey(key);
    
    // printf("Key After Generate: %s", key);
    
    // Şifrelenecek metni alır
    printf("Şifrelenecek metni giriniz: ");
    fgets(plainText, sizeof(plainText), stdin);
    
    // Metinin son indexi olan "\n"'i çıkarır
    plainText[strlen(plainText) - 1] = '\0';
    
    // Tüm harfleri büyük harf ile değiştirir
    for(int i = 0; plainText[i] != '\0'; i++) {
        plainText[i] = toupper(plainText[i]);
    }
    
    // printf("\n\nEntered sentence: [%s]\n\n", plainText);
    
    // Anahtar değere göre metni şifreler
    for(int i = 0; plainText[i] != '\0'; i++) {
        int j = 0;
        
        if (plainText[i] == ' ') {
            cypherText[i] = ' ';
            continue;
        }
        while(plainText[i] != ' ') {
            if (plainText[i] == alphabet[j]) {
                cypherText[i] = key[j];
                break;
            }
            else j++;
        }
    }
    
    printf("\n\nCrypted sentence: [%s]\n\n", cypherText);
    
    // Anahtar değere göre şifreli metni çözer
    for(int i = 0; cypherText[i] != '\0'; i++) {
        int j = 0;
        
        if (cypherText[i] == ' ') {
            decryptedText[i] = ' ';
            continue;
        }
        while(cypherText[i] != ' ') {
            if (cypherText[i] == key[j]) {
                decryptedText[i] = alphabet[j];
                break;
            }
            else j++;
        }
    }
    
    printf("\n\nDecrypted sentence: [%s]\n\n", decryptedText);
    
    return 0;
}