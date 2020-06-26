/*
Write an application that calculates the product of the odd integers from 1 to 15.
*/

#include <iostream>

int main() {
	int product = 1;
	for (int integer = 1; integer <= 15; integer += 2) {
		product *= integer;
	}

	std::cout << "Product = "
		<< product
		<< "\n\n";

}