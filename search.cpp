#include <iostream>
using namespace std;

int main(){
	char ans,n;
	int choice,key;
	int a[]={10,5,7,4,6,8,1,9};
	cout<<"\t\t menu\n";

	cin>>choice;
	do{
	cout<<"enter 1 for simple search\n";
	
	switch(choice){
		case 1:
			cout<<"enter the number u wanna search\n";
			cin>>key;
			int index=linear(a,8,key);
			if(index!=1)
			{cout<<key<<"is found"<<index<<endl;}
			else
			cout<<index<<"not found";
			break;
			
	}
	cout<<"enter 'n'";
	cin>>'n';
}while(ans!='n');
}}
int linear(int a[],int n,int key){
	for(int i=0;i<a[i];i++){
		if(a[i]==key)
		return i;
	}
	return -1;
	
}