/*
Write a program that prints a box, an oval, an arrow, and a diamond.
*/

#include<iostream>
#include<string>

std::string square(int lineNum);
std::string circle(int lineNum);
std::string arrow(int lineNum);
std::string diamond(int lineNum);

int main() {

	std::string indent = "     ";
	for (int lineNum = 0; lineNum < 9; ++lineNum) {
		std::cout
			<< square(lineNum) << indent
			<< circle(lineNum) << indent
			<< arrow(lineNum) << indent
			<< diamond(lineNum) << indent
			<< "\n";
	}
	std::cout << "\n";
}

std::string square(int lineNum) {
	switch (lineNum) {
	case 0:
	case 8:
		return "*********";
	default:
		return "*       *";
	}
}

std::string circle(int lineNum) {
	switch (lineNum) {
	case 0:
	case 8:
		return "   ***   ";
	case 1:
	case 7:
		return " *     * ";
	default:
		return "*       *";
	}
}

std::string arrow(int lineNum) {
	switch (lineNum) {
	case 1:
		return "   ***   ";
	case 2:
		return "  *****  ";
	default:
		return "    *    ";
	}
}

std::string diamond(int lineNum) {
	switch (lineNum) {
	case 0:
	case 8:
		return "    *    ";
	case 1:
	case 7:
		return "   * *   ";
	case 2:
	case 6:
		return "  *   *  ";
	case 3:
	case 5:
		return " *     * ";
	default:
		return "*       *";
	}
}