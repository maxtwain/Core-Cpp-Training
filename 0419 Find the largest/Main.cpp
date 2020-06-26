/*
Using an approach similar to that in Exercise 4.17, find the two largest values among the 10 numbers.
*/
#include <iostream>
#include <iomanip>

int main() {

	std::cout << "Enter number: ";
	int number;
	std::cin >> number;
	int large0 = number;
	
	std::cout << "Enter number: ";
	int large1;
	std::cin >> number;

	if (number > large0) {
		large1 = large0;
		large0 = number;
	}
	else {
		large1 = number;
	}

	for (int counter = 0; counter < 8; ++counter) {
		std::cout << "Enter number: ";
		std::cin >> number;
		
		if (number > large0) {
			large1 = large0;
			large0 = number;
		}
		else if(number > large1) {
			large1 = number;
		}
	}

	std::cout
		<< "\nLargest numbers = "
		<< large0
		<< ", "
		<< large1
		<< "\n\n";
}