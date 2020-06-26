/*
Write a program that asks the user to enter two numbers, obtains the two numbers from the user, and prints the sum, product, difference, and quotient of the two numbers.
*/
#include <iostream>

int main() {
	std::cout << "First number: ";
	int num0;
	std::cin >> num0;

	std::cout << "Second number: ";
	int num1;
	std::cin >> num1;

	std::cout 
		<< "\nSum = " << num0 + num1
		<< "\nProduct = " << num0 * num1
		<< "\nDifference = " << num0 - num1
		<< "\nQuotient = " << num0 / num1
		<< "\n\n";

}