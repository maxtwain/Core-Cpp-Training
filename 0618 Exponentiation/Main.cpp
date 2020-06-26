/*
Write a function that returns the value of base^exponent.
*/

#include <iostream>

using std::cout;

double power(double base, double exp);

int main() {

	cout << "3^3 = " << power(3, 3) << "\n";
}

double power(double base, double exp) {
	double ret = 1;
	for (; exp > 0; --exp) {
		ret *= base;
	}
	return ret;
}