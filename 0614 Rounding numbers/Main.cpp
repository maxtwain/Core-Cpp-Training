/*
Function floor can be used to round a number to a specific decimal place.  The statement

y = floor(x * 10 + 0.5) / 10;

rounds x to the tenths position (the first position to the right of the decimal point).  The statement

y = floor(x * 100 + 0.05) / 100;

rounds x to the hundredths position (the second position to the right of the decimal point).  Write a program that defines four functions to round a number x in various ways:

A) roundToInteger(number)
B) roundToTenth(number)
C) roundToHundredth(number)
D) roundToThousandth(number)

For each value you read, your program should print the original value, the number rounded to the nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hundredth, and the number rounded to the nearest thousandth.
*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;

double roundToInteger(double num);
double roundToTenth(double num);
double roundToHundredth(double num);
double roundToThousandth(double num);

int main() {
	double num = 1.3456789;

	cout << setw(13)
		<< "Number = "
		<< num
		<< "\n"
		<< setw(13)
		<< "Integer = "
		<< roundToInteger(num)
		<< "\n"
		<< setw(13)
		<< "Tenth = "
		<< roundToTenth(num)
		<< "\n"
		<< setw(13)
		<< "Hundredth = "
		<< roundToHundredth(num)
		<< "\n"
		<< setw(13)
		<< "Thousandth = "
		<< roundToThousandth(num)
		<< "\n\n";

}

double roundToInteger(double num) {
	return floor(num + 0.5);
}

double roundToTenth(double num) {
	return floor(num * 10 + 0.5) / 10;
}
double roundToHundredth(double num) {
	return floor(num * 100 + 0.5) / 100;
}
double roundToThousandth(double num) {
	return floor(num * 1000 + 0.5) / 1000;
}