// Q2: Listeye rastgele üretilmiş 100 sayı eklensin, girilen tüm sayıları büyükten küçüğe sıralayan ve ekrana basan c kodunu yazınız.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Node tanımlama
struct node { 
    int data;
    struct node* next;
};


// 100 elemanlı rastgele 100 sayıdan oluşmuş bir liste tanımlar
struct node *defineList(struct node *head) {
    srand(time(NULL));
    head->data = rand() % 101;
    head->next = NULL;
    
    struct node* temp = head;
    
    for (int i=0; i<99; i++) {
        struct node *new = (struct node*)malloc(sizeof(struct node));
        new->data = rand() % 101;
        new->next = NULL;
        
        temp->next = new;
        temp = new;
    }
    return head;
}

// Bu fonksiyon head node'unu aldığı listeyi iki farklı işaretçiye eşitler ve bir tane temp değişkeni kullanarak elemanlarını karşılaştırır.
// Koşulları Programlama dilleri dersinde öğrendiğimiz array mantığına benzeterek yapmaya çalıştım.
struct node *orderList(struct node *head) {
    struct node *iNode = head;
    struct node *jNode = head;
    int temp;
    
    for (iNode = head; iNode != NULL; iNode = iNode->next) {
        for (jNode = iNode->next; jNode != NULL; jNode = jNode->next) {
            if (iNode->data >= jNode->data) {
                temp = iNode->data;
                iNode->data = jNode->data;
                jNode->data = temp;
            }
        }
    }
    return head;
}

// Listeyi yazdıran fonksiyon
void printList (struct node* head) {
    if (head == NULL)
        printf("List is empty");
    else {
        while (head != NULL) {
            printf("%d\n", head->data);
            head = head->next;
        }
    }
}

int main() {
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head = defineList(head);
    head = orderList(head);
    
    printList(head);
    
    return 0;
}