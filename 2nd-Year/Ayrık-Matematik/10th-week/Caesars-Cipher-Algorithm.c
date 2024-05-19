#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ----------------------------------------
// Bu kod bir Sezar Şifreleme algoritması
// çalışmasıdır. Key kadar alfabeyi öteler
// ve buna göre şifreli metin oluşturur.
// Karışıklığı önlemek için yalnızca büyük
// harflerin kullanılması tercih edilmiştir
// Berat Tezer                19 Mayıs 2024
// ----------------------------------------

int main() {
    int key;
    char plainText[100], cypherText[100], decryptedText[100];
    
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
    printf("\n\nŞifreleme için anahtar degeri girin(): ");
    scanf("%d", &key);
    
    key = key%26;
    
    // printf("\n\nEntered key: [%d]\n\n", key);
    
    // Anahtar değere göre metni şifreler
    for(int i = 0; plainText[i] != '\0'; i++) {
        cypherText[i] = (plainText[i] != ' ') ? ((plainText[i] + key) > 90 ? 64 + (plainText[i] + key)%90 : (plainText[i] + key)) : ' ';
    }
    
    printf("\n\nCyrpted sentence: [%s]\n\n", cypherText);
    
    // Anahtar değere göre şifreli metni çözer
    for(int i = 0; cypherText[i] != '\0'; i++) {
        decryptedText[i] = (cypherText[i] != ' ') ? ((cypherText[i] - key) < 65 && (cypherText[i] - key) >= 0 ? 90 - (64 - ((cypherText[i] - key))) : (cypherText[i] - key)) : ' ';
    }
    
    printf("\n\nDecrypted sentence: [%s]\n\n", decryptedText);
    
    
    
    return 0;
}