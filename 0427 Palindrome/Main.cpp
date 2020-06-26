/*
A palindrome is a number or a text phrase that reads the same backward as forward.  For example, each of the following five digit integers is a palindrome: 12321, 55555, 45554, and 11611.  Write a program that reads in a five digit integer and determines whether it's a palindrome.
*/

#include <iostream>

int main() {

	std::cout << "Enter a five digit integer: ";
	int number;
	std::cin >> number;

	std::cout << number;
	if (number / 10000 == number % 10 &&
		(number / 1000) % 10 == (number / 10) % 10) {
		std::cout << " IS a palindrome.\n";
	}
	else {
		std::cout << " IS NOT a palindrome.\n";
	}

}