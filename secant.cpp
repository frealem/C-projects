#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
const float e=0.001;
int main(){
	float x1,x2;
cout<<"enter lower\n";
cin>>x1;
cout<<"enter upper\n";
cin>>x2;
//cout<<"enter the TLV\n";
//cin>>e;
secant(x1,x2,e);
return 0;
}
float sec(float x){
	
	return x*x-4*x+3;
}
void secant(float x1 ,float x2,float e){
	float n=0,xm,x0,c;
	if(sec(x1)*sec(x2)<0){
		do {
			x0=(x1*sec(x2)-x2*sec(x1))/sec(x2)-sec(x1);
			c=sec(x1)*sec(x2);
			x1=x2;
			x2=x0;
			n++;
			if(c==0)
			break;
			xm=(x1*sec(x2)-x2*sec(x1))/sec(x2)-sec(x1);
			
		}
		while(fabs(xm-x0)>=e);
		cout<<"root ="<<x0<<endl;
		cout<<"iterations ="<<n<<endl;}
		else{
			cout<<"not found";
		}
	}
