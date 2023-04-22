#include <bits/stdc++.h>
using namespace std;

float fun(float x)
{
    float fun = pow(x, 3) + x - 1;
    return fun;
}
 
void secant(float x1, float x2, float E)
{
    float n = 0, xm, x0, c;
    if (fun(x1) * fun(x2) < 0) {
        do {
            
            x0 = (x1 * fun(x2) - x2 * fun(x1)) / (fun(x2) - fun(x1));
 
            c = fun(x1) * fun(x0);
 
            x1 = x2;
            x2 = x0;
 
            n++;
 
            if (c == 0)
                break;
            xm = (x1 * fun(x2) - x2 * fun(x1)) / (fun(x2) - fun(x1));
             cout <<"iteration"<<n<<""<< "Root =" << x0 << endl;
        //cout << "No_of_iterations = " << n << endl;
        } while (fabs(xm - x0) >= E);
 
       
    } else
        cout << "Can not find a root in the given interval";
}
 

int main()
{
//you can take x1=0,x2=1
    float x1,x2, E=0.0001;
    cout<<"enter the lower or x1\n";
    cin>>x1;
    cout<<"enter the upper or x2\n";
    cin>>x2;
    secant(x1, x2, E);
    return 0;
}