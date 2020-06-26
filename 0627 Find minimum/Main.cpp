/*
Write a program that inputs three double precision, floating point numbers and passes them to a function that returns the smallest number.
*/

#include <iostream>

using std::cout;

double smallest(double n0, double n1, double n2);

int main() {

	cout << smallest(4.5, 3.2, 1.1) << '\n';
	cout << smallest(1.1, 3.2, 4.5) << '\n';
	cout << smallest(4.5, 1.1, 3.2) << '\n';
}

double smallest(double n0, double n1, double n2) {
	
	if (n0 < n1) {
		return n0 < n2 ? n0 : n2;
	}
	else {
		return n1 < n2 ? n1 : n2;
	}
}