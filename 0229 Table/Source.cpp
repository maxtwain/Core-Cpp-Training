/*
Using the techniques of this chpater, write a program that calculates the squares and cubes of the integers from 0 to 10.
*/

#include <iostream>

int main() {
	for (int i = 0; i < 11; ++i) {
		std::cout
			<< i << "\t"
			<< i * i << "\t"
			<< i * i * i << "\n";
	}

	std::cout << "\n";
}