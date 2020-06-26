/*
Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger."  If the numbers are equal print the message "These numbers are equal."
*/

#include <iostream>

int main() {
	std::cout << "First integer: ";
	int int0;
	std::cin >> int0;
	std::cout << "Second integer: ";
	int int1;
	std::cin >> int1;

	if (int0 == int1) {
		std::cout << "These numbers are equal.\n\n";
	}
	else {
		if (int0 > int1) {
			std::cout << int0;
		}
		else {
			std::cout << int1;
		}
		std::cout << " is larger.\n\n";
	}
}