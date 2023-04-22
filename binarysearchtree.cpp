//search , insert ,delete in binary search tree
#include <iostream>
using namespace std;
int main(){
	//insert key
	int key;
	cout<<"enter the key";
	cin>>key;
	bool existElt=false;
//function call
	existElt=binarystree(root,key);
}
struct node {
	int data;
	node*left;
	node*right;
}*root=NULL;
//build tree
node *getnode(int data){
	node *temp=new node;
	temp->data=data;
	temp->left=NULL;
     temp->right=NULL;
     return temp;
}
//to search key from the tree node as boolean
bool binarystree(node*root,int key){
	if(root==NULL)
	return false;
	else if(root->data==key)
	return true;
	else if (root->data>key)
	return binarystree(root->left,key);
	else 
	return binarystree(root->right,key);
}
// to search key and return pointer
node* binaryptr(node *root,int key){
	if (root==NULL||root->data==key){
		return root;
	}
	else if(root->data>key)
	return binaryptr(root->left,key);
	else
	return binaryptr(root->right,key);
}


//===================================================for insertion to binary search tree==========================================================

node* insert(node*root,int ind){
	if(root==NULL)
	{
	return new node(ind);}
	node*cur;
	
	else if(ind<=root->data)//if inserted data < first datas
	{
		cur=insert(root->left,d);
		root->left=cur;
	}
	else{
		cur=insert(root->right,d);
		root->right=cur;
	}
	return root;
}
//===========================================delete =============================
//===================for leaf node====================
node*deletenode(node*root,k){
	if (root==NULL){
		return new node(data);
	}
	else if(root->data<k){
		root->left=deletenode(root->left,k);
		return root;
	}
	else if(root->data>k){
		root->right=deletenode(root->right,k);
		return root;
	}
	//==========if children are empty========
	if(root->left==NULL){
		node*temp=root->right;
		delete root;
		return temp;
	}
	else if (root->right==NULL){
	node*temp=root->left;
	delete root;
	return temp;
	}
}
//=====================if the children have children+========
else{
	node*parent=root;
	node* child=root->right;
	 
	 while(child->left!=NULL){
	 	parent=child;
	 	child=child->left;
	 }
	 if(parent!=root){
	 	parent->left=child->right;
	 }
	 else 
	 {parent->right=child->left;
	 }
	 
	 root->data=child->data;
	 delete child;
	 return root;
	 
}
//=========================traverse===============
void preorder(node*root){
	if (root==NULL)
	return ;
	cout<<root->data<<" "; //the root
	
	preorder(root->left);  //the left
	preorder(root->right);  //right
}

void inorder(node*root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(node*root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}