// Q5: İsme göre arama yapıp sıradaki kaydı silen fonksiyon

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        printf("%d-%10s %2d %2d\n", i++, head->name, head->age, head->number);
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

// İsme göre tüm listeyi tarama ve ismi arama algoritması
int searchByName(struct node *head, char searcingName[10]) {
    for (struct node *temp = head; temp != NULL; temp = temp->next) {
        int result = strcmp(temp->name, searcingName);
        if (result == 0) {
            printf("\nStudent is found.\n");
            return 0;
        }
    }
    printf("\n%s couldn't found in the list.\n", searcingName);
}

struct node *deleteByName(struct node *head, char searchingName[10]) {
    struct node *current = head;
    struct node *previous = NULL;

    while (current != NULL) {
        int result = strcmp(current->name, searchingName);
        
        if (result == 0) {
            if (previous == NULL) {
                head = current->next;
            } else {
                previous->next = current->next;
            }
            free(current);
            printf("\n%s isimli öğrenci silindi.\n", searchingName);
            return head;
        }

        previous = current;
        current = current->next;
    }

    printf("\n%s adında bir öğrenci bulunamadı.\n", searchingName);
    return head;
}


// Listedeki en uzun ismi bulur ve döndürür.
char *longestName(struct node *head) {
    char *longest = "";
    for (struct node *temp = head; temp != NULL; temp = temp->next) {
        if (strlen(temp->name) > strlen(longest)) longest = temp->name;
    }
    return longest;
}

int main() {
    struct node *head;
    char isim[10];
    
    head = addStudent(head);
    head = addStudent(head);
    head = addStudent(head);
    head = addStudent(head);
    
    printf("Which name you want to search?\n> ");
    scanf("%s", isim);
    
    searchByName(head, isim);
    
    printf("Longest name in the list is: %s", longestName(head));
    
    printf("\nWhich names next node you want to delete?\n> ");
    scanf("%s", isim);
    
    head = deleteByName(head, isim);
    
    printList(head);
    
    return 0;
}