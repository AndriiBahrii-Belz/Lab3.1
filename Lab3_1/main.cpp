#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x;
	double y;
	double a;
	double b;

	cout << "x = "; cin >> x;

	a = abs((4*x)-1);

	//Спосіб 1
	if (x < 0)
		b = (pow(x, 7)) - (2 * x);
	if (0 <= x && x < 3)
		b = atan(((exp(x)) + 1) / 8);
	if (x >= 3)
		b = (pow(x, 4)) + (exp((pow(x, 2)) + 3));

	y = a + b;
	
	cout << endl;
	cout << "1) y = " << y << endl;

	//Спосіб 2
	if (x < 0)
		b = (pow(x, 7)) - (2 * x);
	else
		if (x >= 3)
			b = (pow(x, 4)) + (exp((pow(x, 2)) + 3));
		else
			b = atan(((exp(x)) + 1) / 8);

	y = a + b;
	
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}