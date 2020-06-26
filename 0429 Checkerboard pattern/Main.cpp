/*
Write a program that displays the a checkerboard pattern of asterisks.  Your program must use only three output statements, one of each of the following forms:

std::cout << "* ";
std::cout << ' ';
std::cout << std::endl;
*/

#include <iostream>

int main() {

	for (int row = 0; row < 8; ++row) {
		if (row % 2 == 0) {
			std::cout << ' ';
		}
		for (int col = 0; col < 8; ++col){
			std::cout << "* ";
		}
		std::cout << std::endl;
	}

}