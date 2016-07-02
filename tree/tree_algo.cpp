#include<iostream>
#include<vector>
#include "tree_api.h"
using namespace std;

int PREORDER[] = {5,3,2,1,4,7,6};
int INORDER[] = {1,2,3,4,5,6,7};


int main(){
	
	vector<int> preOrder(PREORDER, PREORDER+ sizeof(PREORDER)/sizeof(int));
	vector<int> inOrder(INORDER, INORDER+ sizeof(INORDER)/sizeof(int));

	struct node *root = createTree(preOrder, inOrder);
	if(root == NULL){
		cout<<"error while creating tree\n";
	}
	
	cout<<"\n post order traversal: "<<endl;
	postOrderTraversal(root);
}
