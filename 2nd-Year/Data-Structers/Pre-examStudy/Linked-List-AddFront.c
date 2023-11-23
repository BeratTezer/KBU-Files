#include <stdio.h>

struct complex {
        int real;
        int imaginary;
};


int main() {
    struct complex z1, z2, z3, z4;
    
    z1.real = 5;
    z1.imaginary = 10;
    z2.real = 2;
    z2.imaginary = 4;
    z3.real = 3;
    z3.imaginary = 6;
    z4.real = 7;
    z4.imaginary = 14;

    printf("%d + %di\n", z1.real, z1.imaginary);
    printf("%d + %di\n", z2.real, z2.imaginary);
    printf("%d + %di\n", z3.real, z3.imaginary);#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *addFront(struct node *head, int x) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    
    temp->data = x;
    temp->next = head;
    
    head = temp;
    
    return head;
}

int main() {
    struct node *head;
    
    head = addFront(head, 0);
    head = addFront(head, 1);
    head = addFront(head, 2);
    head = addFront(head, 3);
    head = addFront(head, 4);
    head = addFront(head, 5);
    head = addFront(head, 6);
    head = addFront(head, 7);
    head = addFront(head, 8);
    head = addFront(head, 9);
    
    while (head != NULL) {
        printf("%d\n", head->data);
        head = head->next;
    }
    
    return 0;
}

    printf("%d + %di\n", z4.real, z4.imaginary);

    return 0;
}