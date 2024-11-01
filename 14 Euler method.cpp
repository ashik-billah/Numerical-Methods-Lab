
#include <iostream>
#include <iomanip>

using namespace std;
double f(double x, double y) {
    return (y - x) / (y + x);
}

int main() {
    double x0,y0;

    cout<<"Enter initial value of x0:"<<endl;

    cin>>x0;

    cout<<"Enter initial value of y0:"<<endl;

    cin>>y0;

    double h,xn;

    cout << "Enter step size (h): ";

    cin >> h;
    cout << "Enter the value of x at which to evaluate (xn): ";
    cin >> xn;

    double x = x0;
    double y = y0;

    //cout <<fixed << setprecision(6);
    while (x < xn) {
        y = y + h * f(x, y);
        x = x + h;

        cout << "At x = " << x << ", y = " << y <<endl;
    }

    cout << "Approximate solution at x = " << xn << " is y = " << y <<endl;

    return 0;
}
