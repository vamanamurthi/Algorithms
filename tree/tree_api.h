#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

node* createTreeNode(int data);

