#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node *head;
    
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 7;
    head->next = NULL;
    
    head->next = (struct node*)malloc(sizeof(struct node));
    head->next->data = 7;
    head->next->next = NULL;
    
    head->next->next = (struct node*)malloc(sizeof(struct node));
    head->next->next->data = 7;
    head->next->next->next = NULL;
    
    return 0;
}