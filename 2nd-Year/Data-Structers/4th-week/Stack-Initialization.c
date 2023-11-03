#include <stdio.h>

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