#include <stdio.h>

struct node {
    int data;
    struct node* next;
};

// Iterative way
int count(struct node *head) {
    int counter = 0;
    
    while (head != NULL) {
        counter++;
        head = head->next;
    }
    
    return counter;
}

// Recursive way
int count(struct node *head) {
    if (head == NULL) return 0;
    else return 1 + count(head->next);
}