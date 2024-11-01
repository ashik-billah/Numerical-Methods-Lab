
#include<bits/stdc++.h>

#define f(x) (x*x-4*x-10)

using namespace std;

int main()
{
    float x0,x1,x2,f0,f1,t,error;

    cout<<"Enter initial guess:"<<endl;

    cin>>x0;

     cout<<"Enter second guess:"<<endl;

    cin>>x1;

    cout<<"Enter the tolerance:";

    cin>>t;

    do
    {
        f0 = f(x0);

        f1 = f(x1);

        x2 = x1-f1*(x1-x0)/(f1-f0);

        error = fabs(x2-x1);

        x0 = x1;

        x1 = x2;
    }
    while(error>t);
        cout<<"Approximate root is:"<<x2<<endl;

    return 0;

}
