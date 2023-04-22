//=======================stack======================
#include <iostream>
using namespace std;
 #define max 5
 
 int stack_arr[max];
 int top=-1;
 //================================push===============
 void push(int item){
top=top+1;
if(top==max-1){
	cout<<"it's over flow";
	
}return;

stack_arr[top]=item;
//cout<<item<<endl;
 }
 //========================================pop=============
int pop(){
	if(top==-1){
		cout<<"show underflow stack";
		exit(1);
	}
	int value;
	value=stack_arr[top];
	top=top-1;
	return value;
	}
	//=============================display==============
	void display(){
		cout<<"\t\tthis is the result";
		if(top==-1){
		cout<<"underflow";
	}

	for(int i=top;i=0;i--)
	{
		cout<<stack_arr[i]<<endl;
	}
	}
		//==============size of stack================
	int s_stack(){
		return(top+1);
	}

 int main(){
 	int data;
 push(1);
 push(2);
 push(3);
 push(4);
 data=pop();
// data=pop();
s_stack();
 display();
 
 }