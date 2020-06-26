/*
Write a program that reads in two integers and determines and prints if the first is a multiple of the second.
*/

#include<iostream>

int main() {
	std::cout << "Enter two numbers: ";
	int num0, num1;
	std::cin >> num0 >> num1;
	
	if (std::cin.fail()) {
		std::cout << "Invalid input\n\n";
		return 1;
	}

	std::cout
		<< num0
		<< (num1 % num0 == 0 ? " is " : " is not ")
		<< "a multiple of "
		<< num1
		<< "\n\n";
}