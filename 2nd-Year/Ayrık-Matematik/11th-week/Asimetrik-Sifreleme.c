#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// ----------------------------------------------
// Bu kod bir Asimetrik (Açık Şifreli) şifreleme
// algoritması çalışmasıdır. Her kullanıcı için
// iki adet anahtar tanımlanır ve şifreleme buna
// göre yapılır. Kullanıcı ileteceği mesajı alıcı
// kişinin açık anahtarı ile şifreler ve alıcı
// metni kendi gizli anahtari ile deşfire eder.
// Berat Tezer                      19 Mayıs 2024
// ----------------------------------------------

int gcd(int a, int b) {
    int result, smaller;
    
    if (a>b) smaller = b;
    else smaller = a;
    
    for(int i=1; i<=smaller; i++) ((a%i == 0 && b%i == 0) ? result = i : 0);
    return result;
}

int* encryptFunc(int* plainMessage, int size, int publicKeyE, int publicKeyN) {
    int *encryptedMessage = malloc(sizeof(int)*size);
    
    printf("%d is length now\n", size);
    
    for(int i=0; i<size; i++) {
        int temp = plainMessage[i];
        printf("[%d]:%d is temp now\n", i, temp);
        for(int j=2; j<=publicKeyE; j++) temp = (temp*temp)%publicKeyN;
        encryptedMessage[i] = temp;
        printf("[%d]:%d is temp now\n", i, temp);
        printf("teyit:%d is in array now\n", encryptedMessage[i]);
    }
    return encryptedMessage;
}

int main() {
    int p, q, n, e = 2, fi, d;
    int plainArr[] = {2,5,7,9,14,20}, decypherArr[sizeof(plainArr)/sizeof(plainArr[0])];
    
    p = 17;
    // printf("İlk asal sayıyı giriniz: ");
    // scanf("%d", &p);
    
    q = 11;
    // printf("İkinci asal sayıyı giriniz: ");
    // scanf("%d", &q);
    
    n = p*q;
    fi = (p-1)*(q-1);
    
    // Rastgeleliği arttırmak ve daima en küçük "e" değerinin bulunmasını önlemek adına başlangıç değeri rastgele atama satırları
    // srand(time(NULL));
    // e = rand()%256;
    
    // Fi ile aralarında asal olan "e" değerini bulur
    while(gcd(e, fi) != 1) e++; 
    
    // Hesaplanan "e" değerini yazdırır
    // printf("%d\n", e);
    
    // e*d = 1 + fiK olacak bir tam sayı olan "d" değerini bulur
    for(int i=1; 1; i++) {
        float dTest;
        dTest = (fi*i+1)/e;
        d = dTest;
        if (d==dTest) break;
    }
    
    // Hesaplanan "d" değerini yazdırır
    // printf("%d\n", d);
        
    // Açık anahtarı yazdırır
    // printf("Açık anahtar: [%d][%d]\n", e, n);
    // Açık anahtarı yazdırır
    // printf("Kapalı anahtar: [%d]", d);
    
    int* cypherArr = encryptFunc(plainArr, sizeof(plainArr)/sizeof(plainArr[0]), e, n);
    
    for (int k = 0; k<(sizeof(plainArr)/sizeof(plainArr[0])); k++) printf("%d,", cypherArr[k]);

    return 0;
}