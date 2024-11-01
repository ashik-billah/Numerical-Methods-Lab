
#include<bits/stdc++.h>
 using namespace std;
 #define f(x) 1/(1+x*x)

 int main()
 {
     double lower,upper,interval,step,ans;
     cout << "Enter the lower limit : ";
     cin>>lower;
      cout << "Enter the upper limit (b): ";
     cin>>upper;
      cout << "Enter the number of intervals (n): ";
     cin>>interval;

     step=(upper-lower)/interval;
     ans=f(lower)+f(upper);
     ans=ans/2;

     for(double i=1;i<interval;i++)
     {
         double x= lower+i*step;
         ans=ans+f(x);
     }
     cout << "The approximate integral is: " << ans*step << endl;

     return 0;
 }
