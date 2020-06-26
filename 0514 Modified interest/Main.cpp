/*
Modify the compound interest application of Fig 5.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%.  Use a for loop to vary the interest rate.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::setw;

int main() {
	cout << std::fixed << std::setprecision(2);

	for (double rate = 0.05; rate <= 0.1; rate += .01) {
		double principal{ 1000.00 };

		cout << "Initial principal: " << principal << endl;
		cout << "\tInterest rate:\t" << rate << endl;

		cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

		for (unsigned int year{ 1 }; year <= 10; ++year) {
			double amount = principal * pow(1.0 + rate, year);


			cout << setw(4) << year << setw(20) << amount << endl;
		}
		cout << "\n\n";
	}
}