#include "tree_api.h"

node* createTreeNode(int data){
    node* newNode = new node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void printVector(vector<int> data, string str){
	cout<<" \n === "<<str<<": "; 
	for(int i=0; i<data.size(); i++){
		cout<<" "<<data[i];
	}
	cout<<"\n";
}
int findIndex(vector<int> data, int value){
	if(data.size()==0)
		return -1;
	for(int i=0; i<data.size(); i++){
		if(data[i]==value)
			return i;
	}
	return -1;
}

node* createTree(vector<int> preOrder, vector<int> inOrder){
	if( (preOrder.size() != inOrder.size()) || (preOrder.size() == 0) ){
		return NULL;
	}
	node* root = buildTree(preOrder, inOrder);

	return root;
}

node* buildTree(vector<int> &preOrder, vector<int> inOrder){
	if(preOrder.size()==0 || inOrder.size()==0)
		return NULL;
	
	int index = findIndex(inOrder, preOrder[0]);
	if(index == -1)
		return NULL;

	node* newNode = createTreeNode(inOrder[index]);
	preOrder.erase(preOrder.begin());
	vector<int> tempLeft(inOrder.begin(), inOrder.begin()+index);
	vector<int> tempRight(inOrder.begin()+index+1, inOrder.end());
	newNode->left = buildTree(preOrder, tempLeft);
	newNode->right = buildTree(preOrder, tempRight);

	return newNode;
}


//Tree Traversal 
void postOrderTraversal(node* root){
	if(root == NULL)
		return;
	
	postOrderTraversal(root->left);
	postOrderTraversal(root->right);
	cout<<" --> "<<root->data;
}
