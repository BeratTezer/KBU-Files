#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *addFront(struct node *head, int x) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
};

int main() {
    // First node
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    
    // Second node
    struct node* node1 = (struct node*)malloc(sizeof(struct node));
    node1->data = 1;
    node1->next = NULL;
    head->next = node1;
    
    // Third node
    struct node* node2 = (struct node*)malloc(sizeof(struct node));
    node2->data = 2;
    node2->next = NULL;
    node1->next = node2;
    
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current = head;
    
    while (current != NULL) {
        printf("Data: %d\n", current->data);
        current = current->next;
    }
    
    head = addFront(head, 5);
    current = head;

    printf("\nNew version of the list:\n");  
    while (current != NULL) {
        printf("Data: %d\n", current->data);
        current = current->next;
    }
    
    return 0;
}