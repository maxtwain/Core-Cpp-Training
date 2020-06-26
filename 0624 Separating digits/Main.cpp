/*
Write program segments that accomplish each of the following:

A) Calculate the integer part of the quotient when integer a is divided by integer b.

B) Calculate the integer remainder when integer a is divided by integer b.

C) Use the program pieces developed in A and B to write a function that inputs an integer between 1 and 32767 and prints it as a series of digits, each pair of which is separated by two spaces.  For example, the integer 4562 should print as follows.

4 5 6 2

My notes:  The best way to do this is with a vector, and not in the way the instructions describe.
*/

#include <iostream>
#include <string>

using std::cout;

int quotient(int dividend, int divisor);
int remainder(int dividend, int divisor);
std::string separate(int num);

int main() {

	cout << separate(5) << '\n';
	cout << separate(4562) << '\n';
	cout << separate(32767) << '\n';
}

int quotient(int dividend, int divisor) {
	return dividend / divisor;
}

int remainder(int dividend, int divisor) {
	return dividend % divisor;
}

std::string separate(int num) {
	std::string ret;
	for (int divisor = 10000; divisor >= 1; divisor /= 10) {
		if (num / divisor >= 1) {
			int digit = quotient(num, divisor);
			digit = remainder(digit, 10);
			ret += digit + '0';
			ret += ' ';
		}
	}
	return ret;
}