#include <iostream>

using namespace std;

int main(){
	int index;
	int keys;
	int b[]={12,13,14,15,16,24,34};
	cout<<"enter the key value for search\t";
	cin>>keys;
	index=binary(b,7,keys);
	cout<<index;
}

int binary(int b[],int n,int key){
	int left=0;
	int right=n-1;
	int middle;
	int found=0;
	
	do{
		 middle=(left+right)/2;
		 if(key==b[middle])
		 {found=1;
		 }
		 else if(key<b[middle]){
		 	right=middle-1;
		 }
		 else {
		 left=middle+1;}
		 
	}while(found==0&&left<=right);
	cout<<"the searched value is detected at \t"<<middle<<"index";
	             	
}