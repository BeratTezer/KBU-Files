#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10

struct node {
    int data;
    struct node *next;
};

typedef struct {
    struct node *top;
    int data[STACK_SIZE];
} stack;

// Initialize function
void reset(stack *stk) {
    stk->counter = 0;
    stk->top = -1;
}

// Push function
void push(stack *stk, int x) {
    if (stk->counter == STACK_SIZE) printf("Stack is full\n");
    else {
        // stk->top++;
        // stk->data[stk->top] = x;
        stk->data[++stk->top] = x;
    }
}

// Pop function
int pop(stack *stk) {
    if (stk->top == -1) {
        printf("Stack is empty\n");
        return 0;
    } else {
        // int x = stk->data[stk->top];
        // stk->top--;
        // return x;
        
        return int x = stk->data[stk->top--];
    }
}