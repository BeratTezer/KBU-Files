#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int height;
    struct node *left;
    struct node *right;
};

typedef struct node AVLTREE;

int height(AVLTREE *root) {
    if(root == NULL) return -1;
    else {
        int left_height, right_height;
        left_height = height(root->left);
        right_height = height(root->right);
        
        if(right_height > left_height) return right_height + 1;
        else return left_height + 1;
    }
}

int maxValue(int a, int b) {
    if (a>b) return a;
    else return b;
}

AVLTREE *rightRotate(AVLTREE *z) {
    AVLTREE* temp = z->left;
    z->left = temp->right;
    temp->right = z;
    z->height = maxValue(height(z->left), height(z->right)) + 1;
    temp->height = maxValue(height(temp->left), height(temp->right)) + 1;
    return temp;
}

AVLTREE *leftRotate(AVLTREE *z) {
    AVLTREE* temp = z->right;
    z->right = temp->left;
    temp->left = z;
    z->height = maxValue(height(z->left), height(z->right)) + 1;
    temp->height = maxValue(height(temp->left), height(temp->right)) + 1;
    return temp;
}

AVLTREE *leftRightRotate(AVLTREE *z) {
    z->left = leftRotate(z->left);
    return rightRotate(z);
}

AVLTREE *rightLeftRotate(AVLTREE *z) {
    z->left = rightRotate(z->right);
    return leftRotate(z);
}

AVLTREE *new_node(int data) {
    AVLTREE *p = (AVLTREE*)malloc(sizeof(AVLTREE));
    
    p->data = data;
    p->height = 0;
    p->left = NULL;
    p->right = NULL;
    
    return p;
}

AVLTREE *insertToAVL(int x, AVLTREE *tree) {
    if(tree != NULL) {
        if(x < tree->data) tree->left = insertToAVL(x, tree->left);
        else if(x > tree->data) tree->right = insertToAVL(x, tree->right);
        else return tree;
        
        tree->height = maxValue(height(tree->left), height(tree->right)) + 1;
        
        if((height(tree->left) - height(tree->right)) > 1 && x < tree->left->data) return rightRotate(tree);
        
        if((height(tree->left) - height(tree->right)) > 1 && x > tree->left->data) return leftRightRotate(tree);
    
        if((height(tree->left) - height(tree->right)) < -1 && x > tree->right->data) return leftRotate(tree);
        
        if((height(tree->left) - height(tree->right)) < -1 && x < tree->right->data) return rightLeftRotate(tree);
    } else tree = new_node(x);
    return tree;
}

void preorder(AVLTREE *root) {
    if(root != NULL) {
        printf("%d(H:%d) ", root->data, root->height);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
    AVLTREE *root = NULL;
    
    printf("Your all codes will added to AVLTREE until you type '-1'\n");
    
    while(1){
        int data;
        printf("\nNode->data: ");
        scanf("%d", &data);
        
        if(data == -1) break;
        else root = insertToAVL(data, root);
    }
    
    printf("\n\nYour AVLTREE in preorder\n");
    
    preorder(root);

    return 0;
}
