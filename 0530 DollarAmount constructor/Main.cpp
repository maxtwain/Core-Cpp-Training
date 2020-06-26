/*
Enhance class DollarAmount (Fig. 5.8) with a constructor that receives two parameters representing the whole number of dollars and the whole number of cents.  Use these to calculate and store in the data member amount the total number of pennies.  Test the class with your new constructor.

My notes: The Figure referred to is a poorly written program, because the intention was not to write a well written program, but to teach programming in the code.  In rewriting it, I would not use any of the original code.  Unfortunately, six entire exercises are based on it.  I think I am being fair enough in judging that there isn't much material here for me to learn.  I am going on to the next chapter.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "DollarAmount.hpp"

using std::cout;

int main() {
	DollarAmount d1{ 12345 };
	DollarAmount d2{ 1576 };

	cout << "After adding d2 ("
		<< d2.toString()
		<< ") into d1 ("
		<< d1.toString()
		<< "), d1 = ";

	d1.add(d2);

	cout << d1.toString()
		<< "\n";

	
	cout << "After subtracting d2 ("
		<< d2.toString()
		<< ") from d1 ("
		<< d1.toString()
		<< "), d1 = ";

	d1.subtract(d2);

	cout << d1.toString()
		<< "\n";

	cout << "After subtracting d1 ("
		<< d1.toString()
		<< ") from d2("
		<< d2.toString()
		<< "), d2 = ";

	d2.subtract(d1);

	cout << d2.toString()
		<< "\n\n";

	cout << "Enter integer interest rate and divisor.  For example:\n"
		<< "for      2%, enter:"
}