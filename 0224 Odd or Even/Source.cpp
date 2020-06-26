/*
Write a program that reads an integer and determines and prints whether it is odd or even.
*/
#include<iostream>

int main() {
	std::cout << "Integer: ";
	int num;
	std::cin >> num;
	if (std::cin.fail()) {
		std::cout << "Invalid input\n\n";
		return 1;
	}

	std::cout 
		<< num 
		<< " is "
		<< (num % 2 == 0 ? "even" : "odd")
		<< "\n\n";
}