#include <iostream>
using namespace std;
int main(int argc, char** argv){
int key;

	int a[]={2,3,4,5,6};
	cout<<"enter number for search\n ";
	cin>>key;
	
	int index=Lsearch(a,5,key);
	
	if(index!=-1){
	cout<<key<<"is found in index \t"<<index;}
	else {
	cout<<key<<"is not found within the list";}
	return 0;
}
int Lsearch(int a[],int n,int key){
	for(int i=0;i<n;i++){
		if(a[i]==key)
		return i;
	}return -1;
}