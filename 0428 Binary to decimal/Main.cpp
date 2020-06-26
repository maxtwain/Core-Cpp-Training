/*
Input an integer containing only 0s and 1s (i.e., a binary integer) and print its decimal equivalent.  Use the remainder and division operators to pick off the binary number's digits one ant a time form right to left.  Much as in the decimal number system, where the rightmost digit has positional value of 1, the next digit left has a positional value of 10, then 100, then 1000, and so on, in the binary number system the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then 3, then 8, and o on.
*/

#include <iostream>

int main() {

	int binary = 101;
	std::cout << "Binary = "
		<< binary
		<< "\n";

	int decimal{ 0 };

	for (int mag = 1; binary > 0; mag *= 2) {
		decimal += (binary % 10) * mag;
		binary /= 10;
	}
	
	std::cout << "Decimal equivalent = "
		<< decimal
		<< "\n\n";
}