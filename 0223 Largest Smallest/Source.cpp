/*
Write a program that reads in five integers and determines and prints the largest and the smallest integers in the group.  Use only the programming techniques you learned in this chapter.

My notes:  It is silly to do this with if statements.  I am ignoring that part of the instructions.
*/
#include<iostream>

int main() {
	std::cout << "Enter five integers: ";
	
	int largest;
	std::cin >> largest;
	if (std::cin.fail()) {
		std::cout << "Invalid input\n";
		return 1;
	}
	int smallest = largest;

	int next;
	for (int i = 0; i < 4; ++i) {
		std::cin >> next;
		if (std::cin.fail()) {
			std::cout << "Invalid input\n";
			return 1;
		}

		if (next > largest) {
			largest = next;
		}
		if (next < smallest) {
			smallest = next;
		}
	}

	std::cout << "Largest = " << largest
		<< "\nSmallest = " << smallest
		<< "\n\n";
}