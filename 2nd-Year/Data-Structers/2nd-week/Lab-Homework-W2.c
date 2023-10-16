#include <stdio.h>
#include <stdlib.h>

struct patient {
    int age;
    char name[20];
    int height;
    int priority;
    struct patient* next;
};

void printList (struct patient* head) {
    if (head == NULL)
        printf("List is empty");
    else {
        while (head != NULL) {
            printf("\n--------------------------\n");
            printf("%8s - ", head->name);
            printf("%3d - ", head->age);
            printf("%3d - ", head->height);
            printf("%1d |", head->priority);
            head = head->next;
        }
    }
}

int main() {
    struct patient* patient1 = (struct patient*)malloc(sizeof(struct patient));
    printf("Write name for the patient: ");
    scanf("%s", patient1->name);
    printf("Age is the patient: ");
    scanf("%d", &patient1->age);
    printf("Height is the patient: ");
    scanf("%d", &patient1->height);
    printf("\nIs the patient has any priority? (0 for NO, 1 for YES)\n|> ");
    scanf("%d", &patient1->priority);
    patient1->next = NULL;
    
    while (1) {
        int loop = 1;
        
        struct patient* newPatient = (struct patient*)malloc(sizeof(struct patient));
        printf("\n\nWrite name for the patient: ");
        scanf("%s", newPatient->name);
        printf("Age is the patient: ");
        scanf("%d", &newPatient->age);
        printf("Height is the patient: ");
        scanf("%d", &newPatient->height);
        printf("\nIs the patient has any priority? (0 for NO, 1 for YES)\n|> ");
        scanf("%d", &newPatient->priority);
        
        if (newPatient->priority == 1) {
            newPatient->next = patient1;
            patient1 = newPatient;
        } else {
            struct patient* temp = (struct patient*)malloc(sizeof(struct patient));
            temp = patient1;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newPatient;
        }
        
        printf("Will you continue? (1 / 0) |> ");
        scanf("%d", &loop);
        
        if (loop == 0) break;
    }
    
    printList(patient1);
    
    return 0;
}