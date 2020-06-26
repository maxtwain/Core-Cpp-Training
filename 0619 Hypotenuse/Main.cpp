/*
Define a function hypotenuse that calculates the hypotenuse of a right triangle when the other two sides are given.  The function should take two double arguments and return the hypotenuse as a double.  Use the function in a program to determine the hypotenuse for each of the triangles shown below.
*/

#include <iostream>

using std::cout;

double hypotenuse(double sideA, double sideB);

int main() {
	cout << hypotenuse(3.0, 4.0) << "\n";
}

double hypotenuse(double sideA, double sideB) {
	return sqrt(sideA * sideA + sideB * sideB);
}