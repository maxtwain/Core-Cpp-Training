/*
Write a function isMultiple that determines for a pair of integers whether the second is a multiple of the first.  The function should take two integer arguments and return true if the second is a multple of the first, false otherwise.  Use this function in a program that inputs a series of pairs of integers.
*/

#include <iostream>

using std::cout;

bool isMultiple(int dividend, int divisor);

int main() {


	cout << isMultiple(6, 3) << '\n';
}

bool isMultiple(int dividend, int divisor) {
	return dividend % divisor == 0 ? true : false;
}