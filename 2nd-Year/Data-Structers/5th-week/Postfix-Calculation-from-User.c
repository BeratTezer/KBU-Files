#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define STACK_SIZE 100

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

void postfixCalculator(char line[100], stack *stackName) {
    int i=0;
    while (line[i] != '\0') {
        if (isdigit(line[i])){
            int number = line[i] - 48;
            push(stackName, number);
        } else {
            int n1 = pop(stackName);
            int n2 = pop(stackName);
            
            // printf("\nn1: %d, n2: %d\n", n1, n2);
            
            switch (line[i]) {
                case '+':
                    push(stackName, n1+n2);
                    // printf("\nn1+n2: %d\n", n1+n2);
                    break;
                case '-':
                    push(stackName, n2-n1);
                    // printf("\nn2-n1: %d\n", n2-n1);
                    break;
                case '*':
                    push(stackName, n1*n2);
                    // printf("\nn1*n2: %d\n", n1*n2);
                    break;
                case '/':
                    push(stackName, n2/n1);
                    // printf("\nn1/n2: %d\n", n1/n2);
                    break;
            }
        }
        i++;
    }
    printf("\nResult is: %d\n", pop(stackName));
}

int main() {
    stack calcutationStack;
    char line[100];
    
    printf("Please write a postfix calculation: ");
    scanf("%s", line);
    
    printf("\nThis code answers the following line: %s\n", line);
    postfixCalculator(line, &calcutationStack);
    
    
    
    return 0;
}