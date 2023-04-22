#include <iostream>
using  namespace std;
struct node {
	int data;
	node*left;
	node*right;
}*root=NULL;
// function to build the tree
node *getnode(int data){
	//create new node called temp
	node*temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
//function to assign key for each node

void assignkey(){
	node*temp;
	// assign key for the root 
	temp=getnode(45);
	root=temp;
	// assign key for the left side w/c is smaller than the root key
	temp=getnode(44);
	root->left=temp;
	temp=getnode(42);
	root->left->left=temp;
	temp=getnode(43);
	root->left->right=temp;
	//assign key for the right nodes w/c is greater than the root key
	temp=getnode(46);
	root->right=temp;
	temp=getnode(47);
	root->right->left= temp;
	temp=getnode(48);
	root->right->right=temp;
}
int main(){
}