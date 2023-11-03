#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5

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
    stack s;
    
    reset(&s);
    
    int A[7] = {1,2,3,5,10,15,20};
    int i = 0, n=50;
    
    for(i=0; i<7; i++) push(&s, A[i]);
    
    for(i=1; i<=3; i++) n = n + pop(&s);
    
    for(i=0; i<3; i++) n = n - pop(&s);
    
    printf("n = %d", n);
    
    
    
    return 0;
}