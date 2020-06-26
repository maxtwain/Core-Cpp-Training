/*
Write a program that reads three nonzero integers and determines and prints whether they're the sides of a right triangle.
*/

#include <iostream>

int main() {

	std::cout << "Enter three side lengths: ";
	double value0, value1, value2;
	std::cin >> value0 >> value1 >> value2;

	while (value0 == 0 || value1 == 0 || value2 == 0) {
		std::cout << "Invalid input.  Try again: ";
		std::cin >> value0 >> value1 >> value2;
	}

	double hyp, sideA, sideB;
	if (value0 > value1) {
		sideA = value1;
		if (value0 > value2) {
			hyp = value0;
			sideB = value2;
		}
		else {
			hyp = value2;
			sideB = value0;
		}
	}
	else {
		sideA = value0;
		if (value1 > value2) {
			hyp = value1;
			sideB = value2;
		}
		else {
			hyp = value2;
			sideB = value1;
		}
	}

	if (sideA * sideA + sideB * sideB == hyp * hyp) {
		std::cout << "These may be the sides of a right triangle.\n";
	}
	else {
		std::cout << "These cannot be the sides of a right triangle.\n";
	}

}