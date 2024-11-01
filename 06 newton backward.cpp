#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    float x[20], y[20], f, u, h, d, p = 1;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Enter the values in the form of x,y:\n";
    for (int i = 0; i < n; i++) {  // Changed to 0-based indexing
        cin >> x[i] >> y[i];
    }

    h = x[1] - x[0]; // Calculate the interval size

    cout << "Enter the searching point: ";
    cin >> f;

    // Calculate u
    u = (f - x[n - 1]) / h; // Use n-1 for 0-based indexing

    d = y[n - 1]; // Start with the last y value

    // Backward interpolation
    for (int i = n - 1, k = 1; i > 0; i--, k++) {
        // Calculate backward differences
        for (int j = n - 1; j >= k; j--) {
            y[j] = y[j] - y[j - 1]; // Update y[j] with the backward difference
        }

        p = p * (u + k - 1) / k; // Update p for the polynomial term
        d = d + p * y[n - 1]; // Update the interpolated value
    }

    cout << fixed << setprecision(6); // For better output formatting
    cout << "For the value of x = " << f << ", the interpolated value is: " << d << endl;

    return 0;
}
