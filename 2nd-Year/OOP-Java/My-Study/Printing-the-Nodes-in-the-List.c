#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void printList (struct node* head) {
    if (head == NULL)
        printf("List is empty");
    else {
        while (head != NULL) {
            printf("%4d\n", head->data);
            head = head->next;
        }
    }
}

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
    
    printList(head);
    
    return 0;
}