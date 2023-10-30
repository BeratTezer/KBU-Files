#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    // First circular linked list's node
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 0;
    head->next = NULL;
    
    // Second circular linked list's node
    struct node* node1 = (struct node*)malloc(sizeof(struct node));
    node1->data = 1;
    node1->next = NULL;
    head->next = node1;
    
    // Third circular linked list's node
    struct node* node2 = (struct node*)malloc(sizeof(struct node));
    node2->data = 2;
    node2->next = head;
    node1->next = node2;
    
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current = head;
    
    while (current != NULL) {
        printf("Data: %d\n", current->data);
        current = current->next;
        sleep(2);
    }
    
    return 0;
}