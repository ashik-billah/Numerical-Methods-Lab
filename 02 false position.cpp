#include <iostream>
#include <cmath>

#define f(x) (pow(x, 2.2) - 69) // Define the function

using namespace std;

int main() {
    float a, b, f1, f2, f3, m, t, error;

    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    f1 = f(a);
    f2 = f(b);

    if (f1 * f2 > 0) {
        cout << "There is no root between a and b / incorrect initial guess" << endl;
        return 0;
    }

    cout << "Enter the tolerance: ";
    cin >> t;

    do {
        // Calculate the False Position
        m = (a * f2 - b * f1) / (f2 - f1);
        f3 = f(m);

        if (f1 * f3 < 0) {
            b = m;
            f2 = f3;
        } else {
            a = m;
            f1 = f3;
        }

        error = fabs(f3);  // Update error to the absolute value of f(m)
    } while (error > t);

    cout << "Approximate root is: " << m << endl;

    return 0;
}
