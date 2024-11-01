
#include<bits/stdc++.h>

using namespace std;

#define f(x,y) (x+y*y)

int main()
{
    float x0,y0,h,xn,interval;

    cout<<"Enter initial value of x0:";

    cin>>x0;

    cout << "Enter initial value of y0:";

    cin >> y0;

    cout << "Enter initial value of xn:";

    cin >> xn;

    cout << "Enter the interval:";

    cin >> interval;

    h = (xn - x0)/interval;

    float yn,k1,k2,k3,k4,k;

    for(int i=1;i<=interval;i++)
    {
        k1 = h*(f(x0,y0));

        k2 = h*(f((x0+h/2),(y0+k1/2)));

        k3 = h*(f((x0+h/2),(y0+k2/2)));

        k4 = h*(f((x0+h),(y0+k3)));

        k = (k1+k2+k3+k4)/6;

        yn = y0+k;

        y0 = yn;

        x0 = x0+i*h;
    }

    cout<<"Value of y at x = " <<xn<<" is "<<yn<<endl;
}


