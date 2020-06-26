/*
Write a program that reads the radius of a circle (as a double value) and computes and prints the diameter, the circumference, and the area.  Use the value 3.14159 for PI.
*/

#include <iostream>

int main() {

	std::cout << "Enter radius: ";
	double radius;
	std::cin >> radius;

	double const PI = 3.14159;
	std::cout << "Diameter = "
		<< radius * 2
		<< "\nCircumference = "
		<< PI * radius * 2
		<< "\nArea = "
		<< PI * radius * radius
		<< "\n\n";

}