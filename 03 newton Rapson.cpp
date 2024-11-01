
#include<bits/stdc++.h>

#define f(x) (x*x*x -3*x-5)

#define df(x) ((3*x*x)-3)

using namespace std;

int main()
{
    float x0,x,f,df,df1,f1,t;

    cout<<"Enter the first guess value:"<<endl;

    cin>>x0;

    cout<<"Enter the tolerance:"<<endl;

    cin>>t;

    do
    {
        f = f(x0);

        df = df(x0);

        x = x0-(f/df);

        x0=x;

        f1 = f(x);


    }
    while(abs(f1)>t);

        cout<<"Root is:"<<x<<endl;

}

