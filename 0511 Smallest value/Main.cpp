/*
Write an application that finds the smallest of several integers.  Assume that the first value read specifies the number of values to input from the user.
*/

#include <iostream>

int main() {

	std::cout << "Enter value: ";
	int count, small, value;
	std::cin >> count;
	small = count--;
	while (count > 0) {
		std::cout << "Enter value: ";
		std::cin >> value;
		if (value < small) {
			small = value;
		}
		--count;
	}

	std::cout << "Smallest value entered = " 
		<< small 
		<< "\n\n";
}