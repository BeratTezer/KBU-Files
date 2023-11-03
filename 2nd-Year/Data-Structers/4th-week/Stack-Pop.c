#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10;

struct node {
    int data;
    struct node *next;
}

typedef struct {
    struct node *top;
    int counter;
} stack;

// Initialize function
void initialize(stack *stk) {
    stk->counter = 0;
    stk->top = NULL;
}

// Push function
void push(stack *stk, int x) {
    if (stk->counter == STACK_SIZE) printf("Stack is full\n");
    else {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = x;
        temp->next = stk->top;
        stk->top = temp;
        stk->counter++;
    }
}

// Pop function
int pop(stack *stk) {
    if (stk->counter == 0) {
        printf("Stack is empty\n");
        return 0;
    } else {
        int x = stk->top->data;
        struct node *temp = stk->top;
        stk->top = stk->top->next;
        
        free(temp);
        
        stk->counter--;
        return 0;
    }
}