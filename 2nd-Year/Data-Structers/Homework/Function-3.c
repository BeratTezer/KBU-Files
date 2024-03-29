// Q3: Öğrenci numarası, isim ve yaşının saklı tutulduğu, listedeki tüm düğümleri dolaşan, öğrenci bilgilerinin tümünü ekrana yazan ve sayan fonksiyonu yazınız.

#include <stdio.h>
#include <stdlib.h>

// Node tanımlama
struct node { 
    char name[10];
    int number;
    int age;
    struct node* next;
};

// Listeyi yazdıran fonksiyon
void printList(struct node* head) {
    int i = 1;
    while (head != NULL) {
        printf("%2d %10s %3d %4d\n", i++, head->name, head->age, head->number);
        head = head->next;
    }
}

// Öğrencileri node'a ekleyen fonksiyon
struct node *addStudent(struct node *head) {
    // Eğer head boşsa head eşitlenir
    if (head == NULL) {
        struct node* ogrenci = (struct node*)malloc(sizeof(struct node));
        ogrenci->next = NULL;
        
        printf("\nWrite name: ");
        scanf("%s", ogrenci->name);
        
        printf("\nWrite number: ");
        scanf("%d", &ogrenci->number);
        
        printf("\nWrite age: ");
        scanf("%d", &ogrenci->age);
        
        head = ogrenci;
        
    } else {
        // Head boş değilse sonuna eklenir
        struct node* ogrenci = (struct node*)malloc(sizeof(struct node));
        ogrenci->next = NULL;
        
        struct node* temp = head;
        int showStudents = 0;
        
        printf("\nWrite name: ");
        scanf("%s", ogrenci->name);
        
        printf("\nWrite number: ");
        scanf("%d", &ogrenci->number);
        
        printf("\nWrite age: ");
        scanf("%d", &ogrenci->age);
        
        printf("\nShow all students? (0 for No, 1 for Yes): ");
        scanf("%d", &showStudents);
        
        while(temp->next != NULL)
            temp = temp->next;
        
        temp->next = ogrenci;
        
        if (showStudents == 1) printList(head);
    }
    return head;
}


int main() {
    struct node *head;
    
    head = addStudent(head);
    head = addStudent(head);
    head = addStudent(head);
    head = addStudent(head);
    
    
    return 0;
}