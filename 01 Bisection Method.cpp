#include<bits/stdc++.h>

#define f(x) x * x *x- 4 * x - 9

using namespace std;

int main()
{
    float a,b,f1,f2,f3,m,t,error;

    cout << "Enter the value of a and b:";

    cin >> a >>b;

    f1=f(a);

    f2=f(b);

    if(f1*f2 > 0)
    {
        cout << "There is no root between a and b:"<<endl;
        return 0;
    }

    cout << "Enter the tollerance:"<<endl;

    cin>>t;

    do
    {
        m = (a+b)/2;

        f3 = f(m);

        if(f1*f3 < 0)
            b = m;
        else
            a = m;

            error = fabs(b-a);

            cout << error;
    }
    while(error>t);

        cout<<"Approximate root is:"<<m<<endl;

        return 0;

}
