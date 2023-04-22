#include <iostream>
using namespace std;
int binary(int a[],int n,int key){
int left=0;
int right=n-1;
int middle;
while(left<=right){
	middle=(left+right)/2;
	if(a[middle]==key)
	return middle;
	else if (key<a[middle])
	right=middle-1;
	else left=middle+1;
}
return -1;
}
int main(){
	int key,n;
	int a[]={1,2,3,4};

do{
		cout<<"enter the key for seach\n";
	cin>>key;
	cout<<
}
while()
}
