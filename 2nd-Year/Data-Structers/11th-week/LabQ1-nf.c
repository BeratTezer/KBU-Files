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

int getBalance(AVLTREE* origin) {
    if (origin == NULL)
        return 0;
    return height(origin ->left) - height(origin ->right);
}

int maxValue(int a, int b) {
    if (a>b) return a;
    else return b;
}

int max(int a, int b) {
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

int minValue(AVLTREE* root) {
    if(root == NULL)
        return 0;
    while(root -> left != NULL) root = root -> left;
    return(root -> data);
}

// int max(AVLTREE* root) {
//     if(root == NULL)
//         return 0;
//     while(root -> right != NULL) root = root -> right;
//     return(root -> data);
// }

AVLTREE deleteNode(AVLTREE *root, int key) {
    if(root == NULL) return root;
    if(key < root->data) root->left = deleteNode(root->left, key);
    else if(key > root->data) root->right = deleteNode(root->right, key);
    else {
        if((root -> left == NULL) || (root -> right == NULL)) {
            AVLTREE *temp = root->left ? root->left : root->right;
            if(temp == NULL) {
                temp = root;
                root = NULL;
            } else {
                *root = *temp; 
                free(temp);
            }
        } else {
            AVLTREE *temp = minValue(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    if (root == NULL) return root;
    
    root->height = max(height(root->left), height(root->right)) + 1;
    
    if (getBalance(root) > 1 && getBalance(root -> left) >= 0) return rightRotate(root);
    
    if (getBalance(root) > 1 && getBalance(root -> left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    
    if (getBalance(root) < -1 && getBalance(root->right) <= 0) return leftRotate(root);
    
    if (getBalance(root) < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root); 
    }
    return root;
    
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

    while(1) {
        int choose;
        printf("1-) Insert\n2-) Delete\n3-) Height\n4-) Preorder\n5-) Quit");
        scanf("%d", &choose);
        switch(choose) {
            case 1:
                printf("Your all numbber will add to AVLTREE until you type '-1'\n");
            
                while(1){
                    int data;
                    printf("\nNode->data: ");
                    scanf("%d", &data);
            
                    if(data == -1) break;
                    else root = insertToAVL(data, root);
                }
            case 2:
                printf("Your all inputs delete in AVLTREE until you type '-1'\n");
            
                while(1){
                    int data;
                    printf("\nDelete: ");
                    scanf("%d", &data);
            
                    if(data == -1) break;
                    else root = delete(data, root);
                }
            case 3:
                printf("\nHeight of the tree is %d.\n" height(root));
            case 4:
                printf("\n\nYour AVLTREE in preorder\n");
                preorder(root);
            case 5:
                printf("\nQuitting...\n");
                break;
            default:
                printf("\nWrong input, please be carefull\n");
        }
    }
    return 0;
}























