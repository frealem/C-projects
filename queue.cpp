#include <iostream>
using namespace std;
 struct node{
 	int data;
 	struct node*link;
 }*top=NULL;
  void linkedstack(int data){
  	struct node*newnode;
  	newnode=malloc(sizeOf(newnode));
  	newnode->data=data;
  	newnode->link=NULL;
  	
  	newnode->link=top;
  	top=newnode;
  }
 void print (){
struct *node=temp;
temp=top;
while(temp){
cout<<temp->data;
temp=temp->link;
}
 }
 int main(){
 	int choice;
 }
