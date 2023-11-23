#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *addLast(struct node *head, int x) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    
    temp->data = x;
    temp->next = NULL;
    
    if (head == NULL) head = temp;
    else {
        struct node *last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = temp;
    }
    return head;
}

int main() {
    struct node *head;
    
    head = addLast(head, 0);
    head = addLast(head, 1);
    head = addLast(head, 2);
    head = addLast(head, 3);
    head = addLast(head, 4);
    head = addLast(head, 5);
    head = addLast(head, 6);
    head = addLast(head, 7);
    head = addLast(head, 8);
    head = addLast(head, 9);
    
    while (head != NULL) {
        printf("%d\n", head->data);
        head = head->next;
    }
    
    return 0;
}