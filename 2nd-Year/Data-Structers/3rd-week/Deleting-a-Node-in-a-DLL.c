#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *delete(struct node *head, int key) {
    if (head != NULL) {
        struct node *temp = head;
        if (head->data == key) {
            head = head->next;
            free(temp);
            head->prev = NULL;
        } else {
            while (temp != NULL && temp->data != key)
                temp = temp->next;
            
            if (temp == NULL)
                return head;
            
            temp->prev->next = temp->prev;
            
            if (temp->next != NULL)
                temp->prev->next = temp->next;
            
            free(temp);
        }
    }
    return head;
}