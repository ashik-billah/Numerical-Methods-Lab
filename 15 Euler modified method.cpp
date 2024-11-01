
#include<bits/stdc++.h>
using namespace std;
double f(double x, double y) {
    return (y - x) / (y + x);
}

int main() {
    double x0, y0, h, xn;
    cout << "Enter initial value of x0:";
    cin >> x0;
    cout << "Enter initial value of y0:";
    cin >> y0;
    cout << "Enter step size (h): ";
    cin >> h;
    cout << "Enter the value of (xn): ";
    cin >> xn;
    double x = x0;
    double y = y0;

    cout << fixed << setprecision(6);
    while (x < xn) {

        double y_pre = y + h * f(x, y);


        double slope_average = (f(x, y) + f(x + h, y_pre)) / 2;
        y = y + h * slope_average;
        x = x + h;

        cout << "At x = " << x << ", y = " << y << endl;
    }

    cout << "Approximate solution at x = " << xn << " is y = " << y << endl;

    return 0;
}
