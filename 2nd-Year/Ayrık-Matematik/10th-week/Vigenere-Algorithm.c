#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// -----------------------------------------------
// Bu kod bir Çoklu Alfabeli şifreleme algoritması
// çalışmasıdır. Girilen anahtar değerine karşılık
// şifrelenecek metine tekrar eden şekilde öteleme
// uygulanmasıyla elde edilmiş bir metoddur.
// Berat Tezer                     19 Mayıs 2024
// ---------------------------------------------

int main() {
    char key[100], plainText[100], cypherText[100], decryptedText[100];
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
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
    
    // Gerekli anahtar değerini alır
    printf("\n\nŞifreleme için anahtar girin: ");
    fgets(key, sizeof(key), stdin);
    
    // Anahtarın son indexi olan "\n"'i çıkarır
    key[strlen(key) - 1] = '\0';
    
    // printf("\n\nEntered key: [%s]\n\n", key);
    
    // Anahtar değere göre metni şifreler
    for(int i = 0; plainText[i] != '\0'; i++) {
        int j = 0, k;
        
        if (plainText[i] == ' ') {
            cypherText[i] = ' ';
            continue;
        }
        while(plainText[i] != ' ') {
            k = 0;
            if (plainText[i] == alphabet[j]) {
                while(key[i%strlen(key)] != alphabet[k]) k++;
                cypherText[i] = alphabet[(j+k)%26];
                break;
            }
            else j++;
        }
    }
    
    printf("\n\nCyrpted sentence: [%s]\n\n", cypherText);
    
    // Anahtar değere göre şifreli metni çözer
    for(int i = 0; cypherText[i] != '\0'; i++) {
        int j = 0, k;
        
        if (cypherText[i] == ' ') {
            decryptedText[i] = ' ';
            continue;
        }
        while(1) {
            k = 0;
            if (cypherText[i] == alphabet[j]) {
                while(key[i%strlen(key)] != alphabet[k]) k++;
                decryptedText[i] = alphabet[(j-k < 0) ? 26 + (j-k) : (j-k)];
                break;
            }
            else j++;
        }
    }
    
    printf("\n\nDecrypted  sentence: [%s]\n\n", decryptedText);

    return 0;
}