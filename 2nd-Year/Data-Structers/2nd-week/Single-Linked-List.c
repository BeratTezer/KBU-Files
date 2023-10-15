#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
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
    head->next = node1; // Linking "node1" to "head" node. This value "NULL" before
    
    // Third node
    struct node* node2 = (struct node*)malloc(sizeof(struct node));
    node2->data = 2;
    node2->next = NULL;
    node1->next = node2; // Linking "node2" to "node1" node. This value "NULL" before
    
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current = head;
    
    while (current != NULL) {
        printf("Data: %d\n", current->data);
        current = current->next;
    }
    
    return 0;
}