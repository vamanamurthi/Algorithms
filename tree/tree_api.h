#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

// to create a tree node
node* createTreeNode(int data);

// function to create a tree
node* createTree(vector<int> preOrder, vector<int> inOrder);

// helper functions to create tree
node* buildTree(vector<int> &preOrder, vector<int> inOrder);
int findIndex(vector<int> data, int value);


// basic tree operations
// post order traversal
void postOrderTraversal(node* root);
