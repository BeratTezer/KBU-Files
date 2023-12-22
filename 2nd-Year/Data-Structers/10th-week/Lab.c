#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node *BTREE;

BTREE insert(BTREE root, int x) {
    if (root=NULL) {
        BTREE new = malloc(sizeof(BTREE));
        new->left = new->right = NULL;
        new->data = x;
        return new;
    }
    
    if(root->data<x) {
        root->right = insert(root->right, x);
        return root;
    } else if (root->data>x) {
        root->left=insert(root->left, x);
        return root;
    }
}

void traverse(BTREE root) {
    if(root==NULL) exit(0);
    printf("%d\t", root->data);
    traverse(root->left);
    traverse(root->right);
}

int size (BTREE root) {
    if(root==NULL) return 0;
    return size(root->left) + size(root->right) + 1;
}

int countParents(BTREE root) {
    if(root==NULL) return 0;
    int parent_say = 0;
    if (root->left!=NULL || root->right!=NULL) parent_say++;
    parent_say += countParents(root->left);
    parent_say += countParents(root->right);
    return parent_say;
}

int bul(BTREE root, int aranan) {
    if(root==NULL) return -1;
    if(root->data == aranan) return 1;
    if(bul(root->left, aranan)==1) return 1;
    if(bul(root->right, aranan)==1) return 1;
    return -1;
}

int main() {
    BTREE root = NULL;
    root = insert(root,25);
    root = insert(root,17);
    root = insert(root,8);
    root = insert(root,32);
    root = insert(root,6);
    root = insert(root,88);
    
    traverse(root);
    printf("\nAgactaki dugum sayisi = %d", size(root));
    int sonuc = countParents(root);
    printf("Agactaki parent sayisi = %d", sonuc);
    
    printf("Fonksiyondan donen deger = %d", bul(root,99));
    
    
    return 0;
}