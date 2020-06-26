/*
Calculate the value of PI from the Leibniz series.  Print a table that shows the value of PI approximated by computing the first 200,000 terms of this series.  How many terms do you have to use before you first get a value that begins with 3.14159?
*/

#include <iostream>

using std::cout;

int main() {

	int terms{ 200'000 };

	cout << "PI with " 
		<< terms 
		<< " terms = ";

	double pi{ 0.0 };
	for (double denom{ 1.0 }; terms > 0; --terms) {
		pi += 4 / denom;
		denom > 0 ? denom += 2 : denom -= 2;
		denom *= -1;
	}

	cout << pi 
		<< "\n\n";
}