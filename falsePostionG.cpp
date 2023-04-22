#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
float E=0.0002;

float pos(float x){
	return x*x*x-4*x+3;
} 
void fPosition(float a,float b){
	if(pos(a)*pos(b)>=0){
	cout<<"invalid interval assumption";}
float c;
int i;
cout<<"\t\tTHE ROOT WITH ITS ITERATION AS FOLLOW\n";
do{

		c=(b*pos(a)-a*pos(b))/(pos(a)-pos(b));
		if(pos(c)==0){
			cout<<"root1 ="<<c;
			
		}
		else if (pos(c)*pos(a)<0)
	b=c;
		else{
	a=c;
	}
	i++;
	cout<<"iteration"<<i<<"="<<c<<"\n";		
		}
		while(fabs(pos(c))>E);
		
		}
		
	 	
int main(){
	// you can use -3for lower and 0 for upper
float a,b;
	cout<<"enter lower\n";     
	cin>>a;
	cout<<"enter upper\n";
cin>>b;
		fPosition(a,b);
	return 0;
}