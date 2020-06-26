/*
legend has it that, in 1626, Peter Minuit purchased Manhatan Island for $24.00 in barter.  Did he make a good investment?  To answer this question, modify the compound interest program of Fig. 5.6 to begin with a principal of $24.00 and to calculate the amount of interest on deposit if that money had been kept on deposit until this year (e.g., 390 years through 2016).  Place the for loop that performs the compound interest calculation in a outer for loop that varies the interest rate from 5% to 10% to observe the wonders of compound interest.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;

int main() {

	cout << std::fixed << std::setprecision(2);

	for (double rate = 0.05; rate <= 0.1; rate += 0.1) {
		double principal{ 24.00 };

		cout << "Initial principal: " << principal << std::endl;
		cout << "\tInterest rate:\t" << rate << std::endl;

		cout << "\nYear" << std::setw(20) << "Amount on deposit" << std::endl;

		for (unsigned int year{ 1 }; year <= 390; year++) {
			double amount = principal * pow(1.0 + rate, year);

			cout << std::setw(4) << year << std::setw(20) << amount << std::endl;
		}
	}
	
}