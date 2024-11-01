
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i, j, n;
	float x[20], y[20], f, u, h, d, p = 1;

	cout << "Enter the value of terms: ";
	cin >> n;

	cout << "Enter the values of term x, y: ";
	for(i = 0; i <= n; i++)
	{
		cin >> x[i] >> y[i];
	}

	h = x[1] - x[0];

	cout << "Enter the searching point: ";
	cin >> f;

	u = (f - x[0]) / h;

	d = y[0];

	for(i = 1; i < n; i++)
	{
		for(j = 0; j < n-i; j++)
		{
			y[j] = y[j + 1] - y[j];
		}
		p = p * (u - i + 1) / i;
		d = d + p * y[0];
	}

	cout << "For the values of x = " << f << " the value is " << d << endl;


	return 0;
}
