/*
Display a checkerboard pattern with eight output statements, then display the same pattern using as few statements as possible.
*/

#include <iostream>
#include <string>

int main() {
	std::string row0 = "* * * * * * * *\n";
	std::string row1 = " * * * * * * * *\n";
	
	std::cout << row0;
	std::cout << row1;
	std::cout << row0;
	std::cout << row1;
	std::cout << row0;
	std::cout << row1;
	std::cout << row0;
	std::cout << row1 << "\n";

	std::cout
		<< row0 << row1 << row0 << row1
		<< row0 << row1 << row0 << row1 << "\n";
}