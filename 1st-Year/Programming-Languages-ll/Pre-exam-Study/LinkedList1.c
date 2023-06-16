// Write a program in C to create and display a Singly Linked List

#include <stdio.h>
#include <stdlib.h>

struct node {
    int number;
    struct node *nextNode;
}*nodes;

void createNodeList(int n);
void displayNodes();

int main() {
    int n;

    printf("How many nodes do you want?\n> ");
    scanf("%d", &n);
    
    createNodeList(n);
    
    printf("\nData is listed:\n");
    displayNodes();

    return 0;
}

void createNodeList(int n) {
    struct node *operationNode, *temp;
    int num, i;

    nodes = (struct node *)malloc(sizeof(struct node));

    if(nodes == NULL) printf("\nMemory can't be allowed\n");
    else {
        printf("\nWrite a number for first node: ");
        scanf("%d", &num);

        nodes->number = num;
        nodes->nextNode = NULL;
        temp = nodes;

        for(i=2; i<=n; i++) {
            operationNode = (struct node *)malloc(sizeof(struct node));

            if(operationNode==NULL) printf("\nMemory can't be allowed\n");
            else {
                printf("\nWrite a number for %d. node: ", i);
                scanf("%d", &num);

                operationNode->number = num;
                operationNode->nextNode = NULL;

                temp->nextNode = operationNode;
                temp = temp->nextNode;
            }
        }
    }
}

void displayNodes() {
    struct node *temp;
    int i=1;
    temp = nodes;

    if(nodes == NULL) printf("\nThere is no nodes to list.\n");
    else if (temp->nextNode == NULL) printf("\n[1]: %d", temp->number);
    else {
        for(i=1; temp!=NULL; i++) {
            printf("\n[%d]: %d", i, temp->number);
            temp = temp->nextNode;
        }
    }
};