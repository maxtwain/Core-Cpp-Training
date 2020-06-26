/*
Write a program that inputs a series of integers and passes them one at a time to function isEven, which uses the remainder operator to determine whether an integer is even.  The function shoudl take an integer argument and return true if the integer is even and false otherwise.
*/

#include <iostream>

using std::cout;

bool isEven(int num);

int main() {

	cout << "8 is even? " << isEven(8) << "\n";
	cout << "11 is even? " << isEven(11) << "\n";
}

bool isEven(int num) {
	return num % 2 == 0 ? true : false;
}