/*
The greatest common divisor (GCD) of two integers is the largest integer that evenly divides each of the numbers.  Write a function gcd that returns the greatest common divisor of two integers.
*/

#include <iostream>

using std::cout;

int gcd(int num0, int num1);

int main() {

	int num0 = 6;
	int num1 = 9;

	cout << "GCD of "
		<< num0
		<< " and "
		<< num1
		<< " = "
		<< gcd(num0, num1)
		<< "\n\n";
}

int gcd(int num0, int num1) {

	while (num1 % num0 != 0) {
		--num0;
	}
	return num0;
}