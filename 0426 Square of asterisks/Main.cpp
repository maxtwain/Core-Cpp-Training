/*
Write a program that reads in the size of the side of a square, then print a hollow square of that size out of asterisks and blanks.  Your program should work for squares of all side sizes between 1 and 20.
*/

#include <iostream>

int main() {

	std::cout << "Enter square size (1-20): ";
	int size;
	std::cin >> size;
	while (size < 1 || size > 20) {
		std::cout << "Invalid entry.  Try again: ";
		std::cin >> size;
	}

	for (int row = 0; row < size; ++row) {
		for (int col = 0; col < size; ++col) {
			if (row == 0 || row == size - 1 ||
				col == 0 || col == size - 1) {

				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
			
		}
		std::cout << "\n";
	}

}