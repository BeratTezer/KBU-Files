#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 3

struct node {
    int data;
    struct node *next;
};

typedef struct {
    int top;
    int data[STACK_SIZE];
    int counter;
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
        stk->counter++;
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
        
        int x = stk->data[stk->top--];
        stk->counter--;
        
        return x; 
    }
}

int main() {
    stack n;
    
    reset(&n);
    
    push(&n, 4);
    push(&n, 14);
    push(&n, 41);
    push(&n, 6);
    
    printf("%d\n", pop(&n));
    printf("%d\n", pop(&n));
    printf("%d\n", pop(&n));
    printf("%d\n", pop(&n));

    return 0;
}