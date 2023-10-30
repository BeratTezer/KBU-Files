#include <stdio.h>
#include <stdlib.h>

struct patient {
    int age;
    char name[20];
    int height;
    struct patient* next;
};

int main() {
    struct patient* head = (struct patient*)malloc(sizeof(struct patient));
    head->age = 18;
    head->next = NULL;
    
    struct patient* node1 = (struct patient*)malloc(sizeof(struct patient));
    node1->age = 22;
    node1->next = NULL;
    
    head->next = node1;
    
    printf("First patient's age: %d\n", head->age);
    printf("Second patient's age: %d", head->next->age);
    
    struct patient* new = (struct patient*)malloc(sizeof(struct patient));
    new->age = 15;
    new->next = head;
    
    head = new;
    
    printf("\nNew heads age is: %d", head->age);
    
    return 0;
}