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
};