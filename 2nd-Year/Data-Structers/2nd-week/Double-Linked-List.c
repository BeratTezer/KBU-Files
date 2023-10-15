#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* previous;
    struct node* next;
};

int main() {
    // First double linked node
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 0;
    head->previous = NULL;
    head->next = NULL;
    
    // Second double linked node
    struct node* node1 = (struct node*)malloc(sizeof(struct node));
    node1->data = 1;
    node1->previous = head;
    node1->next = NULL;
    head->next = node1;
    
    // Third double linked node
    struct node* node2 = (struct node*)malloc(sizeof(struct node));
    node2->data = 2;
    node2->previous = node1;
    node2->next = NULL;
    node1->next = node2;
    
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current = head;
    
    while (current != NULL) {
        printf("Data: %d\n", current->data);
        if (current->next == NULL) {
            while (current != NULL) {
                printf("Data: %d\n", current->data);
                current = current->previous;
            }
        }
        current = current->next;
    }
    
    return 0;
}