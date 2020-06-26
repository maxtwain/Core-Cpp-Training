/*
Write a program that reads in the radius of a circle as an integer and prints the circle's diameter, circumference, and area.  Use the constant value 3.14159 for PI.  Do all calculations in output statements.  [Note: In this chapter, we've discussed only integer constants and variables.  In Chapter 4 we discuss floating point numbers, i.e., values that have decimal points.]
*/

#include<iostream>

int main() {
	const double PI = 3.14159;

	std::cout << "Radius: ";
	int radius;
	std::cin >> radius;
	if (std::cin.fail()) {
		std::cout << "Invalid input\n\n";
		return 1;
	}

	std::cout
		<< "Diameter = " << 2 * radius
		<< "\nCircumference = " << 2 * PI * radius
		<< "\nArea = " << PI * radius * radius
		<< "\n\n";

}