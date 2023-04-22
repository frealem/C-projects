#include <stdio.h>
#include <iostream>

using namespace std;

int n=100,rear=-1,front=-1;
int queue[100];
void isempty(){
	if(rear==-1&&front==-1)
	cout<<"it's empty\n";
	else 
	cout<<"the queue is not empty";
}
void isfull(){
	if(rear==n-1)
	cout<<"the queue is full\n";
	else
	cout<<"the queue is not full";
}
void peak(){
	if (rear==-1&&front==-1)
	cout<<"there is no element here in the queue\n";
	else{
		cout<<"the element in top most of the queue is:"<<queue[front]<<endl;
	}
}
void enqueue(){
	int element;
	if(rear==n-1){
		cout<<"queue overflow"<<endl;
	}
	else{
		if(front==-1) 
		{
		front=0;}
		    cout<<"add the element to the list of the queue"<<endl;
		    cin>>element;
		    rear++;
		    queue[rear]=element;
		
	}
}
void dequeue(){
	if(rear==-1 && front==-1){
		cout<<"the queue is in underflow\n";
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		cout<<"the delete item in queue is here:"<<queue[front]<<endl;
		front++;
	}
}
void display(){
	if (front==-1)
	cout<<"the queue is empty\n";
	else{
		cout<<"the queue elements are:"
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<" "<<endl;
		}
	}}
	
	int main(){
		int choice;
		cout<<"1-for add  or queue element"<<endl;
		cout<<"2-for delete or dequeue element"<<endl;
		cout<<"3-for display all element "<<endl;
		cout<<"4-for displaying without delete or peak element"<<endl;
		cout<<"5-for check full or not"<<endl;
		cout<<"6-for check empty or not"<<endl;
		cout<<"7-exit"<<endl;
		
		do{
		cout<<"enter your choice";
		cin>>choice;
		switch(choice){
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:peak();
			break;
			case 5:isfull();
			break;
			case 6:isempty();
			break;
			case 7:exit(1);
		default<<"invalid choice";
		}
		}
		while(choice!=7);
		return 0;
	}
