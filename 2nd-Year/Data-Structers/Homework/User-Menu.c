// Q5: En uzun ismi arayıp yazdıran fonksiyon

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Node tanımlama
struct node { 
    char name[10];
    int number;
    int age;
    int data;
    struct node* next;
};

// Listeyi yazdıran fonksiyon
void printStudentList(struct node* head) {
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
        
        if (showStudents == 1) printStudentList(head);
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

// Liste sıralama fonksiyonu
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
    struct node *head;
    struct node *head2;
    char isim[10];
    int loop = 1;
    
    while (loop) {
        int menuInput;
        printf("\nWhat do you want to do?\n1) Add Student\n2) List Random 100 Number\n3) Show All Students\n4) Search Student\n5) Find Longest Named Student\n6) Delete Students Next\n-1) Exit\n> ");
        scanf("%d", &menuInput);
        switch (menuInput) {
            case 1:
                head = addStudent(head);
                continue;
            case 2:
                head2 = (struct node*)malloc(sizeof(struct node)); // head2'yi başlat
                head2 = defineList(head2);
                head2 = orderList(head2);
                printList(head2);
                continue;
            case 3:
                printStudentList(head);
                continue;
            case 4:
                printf("\nWrite a student name: ");
                scanf("%s", isim);
                searchByName(head, isim);
                continue;
            case 5:
                printf("\nLongest name in the list is: %s\n", longestName(head));
                continue;
            case 6:
                head = deleteByName(head);
                continue;
            case -1:
                printf("\nProgram is ended.\n");
                loop = 0;
                break;
            default:
                printf("\nInvalid input, please try again.\n");
                continue;
        }
    }
    return 0;
}