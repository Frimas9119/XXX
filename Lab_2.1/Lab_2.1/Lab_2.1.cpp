#include <iostream>
using namespace std;
int main()
{
	double z1;
	double z2;
	double x;
	double y;
	cout << "X=";
	cin >> x;
	cout << "y=";
	cin >> y;
	z1 = pow(cos(x), 4) - pow(sin(y), 2) + 0.25 * pow(sin(2*x), 2) - 1;
	z2 = sin(x + y) * sin(y - x);
	cout << "Z1=" << z1;
	cout << "Z2=" << z2;
}

