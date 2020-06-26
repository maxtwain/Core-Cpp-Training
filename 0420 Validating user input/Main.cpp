/*
The examination results program of Fig. 4.14 assumes that any value input by the user that's not a 1 must be a 2.  Modify the application to validate its inputs.  On any input, if the value entered is other than 1 or 2, keep looping until the user enters a correct value.
*/

#include <iostream>

int main() {

	unsigned int passes{ 0 };
	unsigned int failures{ 0 };
	unsigned int studentCounter{ 1 };

	while (studentCounter <= 10) {
		std::cout << "Enter result (1 = pass, 2 = fail): ";
		int result;
		std::cin >> result;
		while (result != 1 && result != 2) {
			std::cout << "Invalid entry.  Try again: ";
			std::cin >> result;
		}

		result == 1 ? ++passes : ++failures;

		++studentCounter;
	}

	std::cout << "Passed: " << passes << "\nFailed: " << failures << std::endl;

	if (passes > 8) {
		std::cout << "Bonus to instructor!\n";
	}
}