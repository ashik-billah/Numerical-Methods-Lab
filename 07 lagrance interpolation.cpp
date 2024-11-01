#include <iostream>
using namespace std;

double lagrangeInterpolation(double x[], double y[], int n, double xp) {
    double result = 0.0;

    for (int i = 0; i < n; i++) {
        double term = y[i];

        for (int j = 0; j < n; j++) {
            if (j != i) {
                term *= (xp - x[j]) / (x[i] - x[j]);
            }
        }

        result += term;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter number of data points: ";
    cin >> n;

    double x[n], y[n], xp;
    cout << "Enter data points (x y):" << endl;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    cout << "Enter x value to interpolate: ";
    cin >> xp;

    double result = lagrangeInterpolation(x, y, n, xp);
    cout << "Interpolated value at x = " << xp << " is: " << result << endl;

    return 0;
}

