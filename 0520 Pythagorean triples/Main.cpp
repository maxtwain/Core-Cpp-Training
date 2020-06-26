/*
A right triangle can have sides whose lengths are all integers.  The set of three integer values for the lengths of the sides of a right triangle is called a Pythagorean triple.  The lengths of the three sides must satisfy the relationship that the sum of the squares of two of the sides is equal to the square of the hypotenuse.  Write an application that displays a table of the Pythagorean triples for side1, sid2, and the hypotenuse, all no larger than 500.  Use a triple nested for loop that tries all possibilities.  This is an example of brute force computing.  You'll learn in more advanced computer science courses that for many interesting problems there's no known algorithmic approach other than using sheer brute force.

My notes: This is an ineffective way to solve this exercise.
*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;

int main() {

	cout << setw(10) << "Side A" << setw(10) << "Side B" << setw(10) << "Hypotenuse\n";
	for (int side1 = 1; side1 < 500; ++side1) {
		for (int side2 = 1; side2 < 500; ++side2) {
			for (int hyp = 1; hyp < 500; ++hyp) {
				if (side1 * side1 + side2 * side2 == hyp * hyp) {
					cout << setw(10) << side1 << setw(10) << side2 << setw(10) << hyp << "\n";
				}
			}
		}
	}
	cout << "\n";
}