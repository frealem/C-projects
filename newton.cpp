#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
float e,x0=1;
int main(){
	
	cout<<"enter the TLV";
	cin>>e;
	newtonR(x0);
	return 0;
}
float newn(float x){
	return x*x+3*x+4;
}
float der(float x)
{return 2*x+3;
 } 
void newtonR(float x0){
	if(der(x0)!=0&&newn(x0!=0)){
		cout<<"invalid";
	}
	float x1;
	do{
		x1=x0;
		x1=x0-newn(x0)/der(x0);
		
	}
while(fabs(x0-x1)<e);
}
