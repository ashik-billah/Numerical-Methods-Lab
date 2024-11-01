
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


     for(double i=1;i<interval;i++)
     {
         double x= lower+i*step;
         if((int) i%3!=0)
            ans=ans+3*f(x);
         else
         ans=ans+2*f(x);
     }
     cout << "The approximate integral is: " << ans*step*3/8 << endl;

     return 0;
 }


