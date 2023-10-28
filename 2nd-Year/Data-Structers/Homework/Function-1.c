// Q1: Klavyeden -1 girilinceye kadar, girilen tüm tek sayıları listenin başına, çift sayıları ise listenin sonuna ekleyen fonksiyonu yazınız.

#include <stdio.h>
#include <stdlib.h>

// Node tanımlama
struct node { 
    int data;
    struct node* next;
};

// Derste öğrendiğimiz addFront fonksiyonu. Girilen head node'un önüne bir adet node ekliyor ve
// yeni head'i eklenen node olarak değiştirerek dönüdürüyor. Verisi "x" olacak. 
struct node *addFront(struct node *head, int x) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    
    if (head == NULL)
        head = temp;
    else
        temp->next = head;
        head = temp;
    
    return head;
};

// Derste öğrendiğimiz addLast fonksiyonu. Girilen head node'un gösterdiği listenin son elemanından sonraya yeni bir node ekler.
// Son node burada oluşturulan node olur. Verisi "x" olacak.
struct node *addLast(struct node *head, int x) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    
    if (head == NULL)
        head = temp;
    else {
        struct node* last = head;
        while (last->next != NULL)
            last = last->next;
        last->next = temp;
    }
    return head;
};

// Soruda bizden istenen fonksiyon. Yalnızca head değeri oluşturuyor ve kendi içindeki döngü sayesinde -1 girilene kadar
// girilen sayıyı kontrol ediyor ve listeye ekliyor.
struct node *Function(struct node *head) {
    int loop = 1; // Döngünün kontrolünü sağlayan değişken
    
    while (loop) {
        int number;
        
        // Girilecek sayıları buradan alıyoruz.
        printf("\nWrite a number: ");
        scanf("%d", &number);
        
        if (number == -1) {
            // Girilen sayı "-1" ise döngüyü sonlandırır
            loop = 0;
        } else if (number%2 == 0) {
            // Girilen sayı çift ise sayıyı listenin sonuna ekler
            head = addLast(head, number);
        } else {
            // Girilen sayı tek ise sayıyı listenin başına ekler
            head = addFront(head, number);
        }
    }
    // head node'u döndürür
    return head;
}

int main() {
    struct node *newList;
    
    // Bilgilendirme metni
    printf("This program will take numbers you write and add them to the list. If the number is an odd program will add front of the list, if it's an even the number will add end of the list.\nTo leave, please write -1");
    
    newList = Function(newList);
    
    return 0;
}