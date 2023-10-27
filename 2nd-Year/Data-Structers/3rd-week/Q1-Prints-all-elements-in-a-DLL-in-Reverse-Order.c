#include <stdio.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
}

// Q: Write a C funciton that prints all elements in a DLL in reverse order without recursively.

void printReserve(struct node *head) {
    struct node *last = head;
    while (last->next != NULL)
        last = last->next;
        
    while (last != NULL) {
        printf("%d", last->data);
        last = last->prev;
    }
}

// Shorter way of the solution
 void printReserve(struct node *head) {
     while (head->next != NULL) 
        head = head->next;
        
    while (head->prev != NULL) {
        printf("%d", head->data);
        head = head->prev;
    }
 }