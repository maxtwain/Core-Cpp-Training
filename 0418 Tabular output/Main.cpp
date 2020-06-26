/*
Write a C++ program that uses a while statement and the tab escape sequence /t to print the following tables of values:
*/

#include <iostream>

int main() {
	
	std::cout << "N\t10*N\t100*N\t1000*N\n\n";
	for (int i = 1; i < 6; ++i) {
		std::cout 
			<< i 
			<< "\t" 
			<< i * 10 
			<< "\t" 
			<< i * 100 
			<< "\t" 
			<< i * 1000 
			<< "\n";
	}
}