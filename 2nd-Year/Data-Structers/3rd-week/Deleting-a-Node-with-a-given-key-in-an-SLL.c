#include <stdio.h>

struct node {
    int data;
    struct node *next;
}

struct node *delete(struct node *head, int key) {
    if (head == NULL) {
        struct node *temp = head;
        if (head->data == key) {
            head = head->next;
            free(temp);
        } else {
            while (temp->next != NULL && temp->next->data != key)
                temp = temp->next;
            
            if (temp->next = NULL) return head;
            
            struct node *deleted = temp->next;
            
            temp->next = deleted->next;
            
            free(deleted);
        }
    }
    return head;
}