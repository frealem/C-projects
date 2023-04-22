#include<iostream>
using namespace std;
/*int main(){
//	cout<<"hello this is c++";
	int a=5;
	void *ptr;
	ptr=&a;
	cout<<*(int *)ptr;
	return 0;*/ //void pointer
//dangling,...
// ================use pointer============================
/*int arr[4]={2,3,4}; //==========show increment array by pointer
int *ptr;
ptr=&arr[0];
for(int i=0;i<3;i++){
	cout<<*ptr<<endl;
	ptr++;
}*/
/*
//==================pointer operation======increment=====
int arr[7]={2,3,5,7,11,13,17};
int *ptr;
int n=2;
ptr=&arr[0];
for(int i=0;i<7;i++){
cout<<*ptr<<endl;
ptr=ptr+n;}*/
//==================pointer operation======decrement=====
/*int arr[7]={2,3,5,7,11,13,17};
int *ptr;
int n=1;
ptr=&arr[6];
for(int i=0;i<7;i++){
cout<<*ptr<<endl;
ptr=ptr-n;}
}*/
//===========================array of pointer=============
/*int arr[]={22,33,44};
int *ptr[3];
for(int i=0;i>3;i++){
	ptr[i]=&arr[i];
	
}
for(int i=0;i<3;i++){
	cout<<*ptr[i]<<endl;
}*/
//==============================two dimentional array===============
/*int c,r;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for( r=0;r<3;r++){
	cout<<" ";
	for( c=0;c<3;c++)
	{cout<< arr[r][c];
	
	}cout<<endl;*/

//==============================3D array=========================

//==============================insert array=======================
int nr,nc,c,r;
cout<<"enter the number of row then column"<<endl;
cin>>nr>>nc;
cout<<"enter the values of array"<<endl;

int arr[nr][nc];
for(r=0;r<nr;r++){
for(c=0;c<nc;c++){
	cin>>arr[r][c];
	
}cout<<arr[r][c]<<endl;}}

//==============================linked list 1======================
class node{
	public:
		int *node;
		node *next;
}

