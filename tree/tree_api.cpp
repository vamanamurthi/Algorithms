#include "tree_api.h"

node* createTreeNode(int data){
    node* newNode = new node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

