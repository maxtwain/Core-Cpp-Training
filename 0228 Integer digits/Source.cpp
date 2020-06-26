/*
Write a program that inputs a five digit integer, separates the integer into its digits, and prints them separated by three spaces each.
*/

#include <iostream>

int main() {
	std::cout << "Five digit integer: ";
	int fiveDigit;
	std::cin >> fiveDigit;

	if (std::cin.fail() || fiveDigit > 99999) {
		std::cout << "Invalid input\n\n";
		return 1;
	}

	std::cout
		<< fiveDigit / 10000 << "   "
		<< (fiveDigit / 1000) % 10 << "   "
		<< (fiveDigit / 100) % 10 << "   "
		<< (fiveDigit / 10) % 10 << "   "
		<< fiveDigit % 10 << "   \n\n";
}