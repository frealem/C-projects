#include <iostream>

using namespace std;
int indexa,n;
int sorted;
 int main(){
 int list[]={23,25,20,40,3};
 int l[]={34,5,12,56,48};
 bubble(l,5);
 //simplesort(list,5);
 }
 void simplesort(int list[],int n){
 	for(int i=0;i<=n-2;i++){
		for(int j=i+1;j<=n-1;i++){
	 if (list[i]>list[j]){
	 	//swapping
	 	int temp;
	 	temp=list[i];
	 	list[i]=list[j];
	 	list[i]=temp;
	 	
	 }indexa=list[i];
	 }
	  }cout<< "here are the list:\n"<<indexa;
	
 }
 void bubble(int l[],int n){
 	for(int i=0;i<=n;i++){
 		for(int j=n-1;j>i;j--){
 			if(l[j]<l[j-1]){
 				int temp =l[j];
 				l[j]=l[j-1];
 				l[j-1]=temp;
			 }sorted=l[j-1];
			 
		 }
		 }cout<<sorted;
	 }
 
 