#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *addFront(struct node *head, int x) {
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = x;
    
    if (head == NULL) {
        temp->next = temp;
        head = temp;
    } else {
        temp->next = head;
        struct node *last = head;
        while(last->next != head)
            last = last->next;
        
        last->next = temp;
    }
    return head;
}#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *addFront(struct node *head, int x) {
    struct node *temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = x;
    
    if (head == NULL) {
        temp->next = temp;
        head = temp;
    } else {
        temp->next = head;
        struct node *last = head;
        while(last->next != head)
            last = last->next;
        
        last->next = temp;
    }
    return head;
}

// Test

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    
    head->data = 1;
    head->next = NULL;
    
    struct node *node1 = (struct node*)malloc(sizeof(struct node));
    
    node1->data = 2;
    node1->next = NULL;
    head->next = node1;
    
    struct node *node2 = (struct node*)malloc(sizeof(struct node));
    
    node2->data = 3;
    node2->next = NULL;
    node1->next = node2;
    
    struct node *node3 = (struct node*)malloc(sizeof(struct node));
    
    node3->data = 4;
    node3->next = head;
    node2->next = node3;
    
    head = addFront(head, 0);
    
    for (int i=0; i<10; i++) {
        printf("%d\n\n", head->data);
        head = head->next;
    }
    
    
    return 0;
}