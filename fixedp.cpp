#include <iostream>
#include<math.h>
using namespace std;
float fixed(float x){
    return (float)(pow(x,3)-4*pow(x,2)-10);
}
const float tlv=0.001;
int main(){
	//you can enter the value 0.0 and 1.5
    float x;
    float x0=1.5;
    cout<<"enter the lower value/x\n";
    cin>>x;
    cout<<"enter the upper value/x0\n";
    cin>>x0;
    int N;
    cout<<"enter no fo iteration\n";
    cin>>N;
    int i=1;
    while(i<N){
        x=(float)fixed(x0);
        if((x-x0)<tlv){
          cout<<x<<endl;
          break;
        }
        i=i+1;
        x0=x;
        if(i>N){
          cout<<"cannot found ";
          break;
        }
    }
    return 0;
}