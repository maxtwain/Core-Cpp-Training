/*
Write a program that prints the powers of the integer 2, namely 2, 3, 8, 16, 32, 64, ect.  Your while loop should not terminate (i.e., you should create an infinite loop).  To do this, simply use the keyword true as the expression for the while statement.
*/

#include <iostream>

int main() {

	int num = 2;
	while (true) {
		std::cout << num << ' ';
		num *= 2;
	}
}