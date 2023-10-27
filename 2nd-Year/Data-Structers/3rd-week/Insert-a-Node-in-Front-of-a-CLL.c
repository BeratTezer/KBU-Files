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
        head = temp;
    }
    return head;
}