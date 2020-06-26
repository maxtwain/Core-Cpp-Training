/*
Modify the application you wrote in Exercise 5.23 to read an odd number in the range 1 to 19 to specify the number of rows in the diamond.  Your program should then display a diamond of the appropriate size.
*/

#include <iostream>

using std::cout;

int main() {

	cout << "Row count: ";
	int rowMax;
	std::cin >> rowMax;
	while (rowMax < 1 || rowMax > 19) {
		cout << "Invalid entry.  Try again: ";
		std::cin >> rowMax;
	}

	for (int row = 0; row < rowMax; ++row) {
		for (int col = 0; col < rowMax; ++col) {
			if (row + col >= rowMax / 2 &&
				row + col < (rowMax * 3) / 2 &&
				row - col < rowMax / 2 + 1 &&
				col - row < rowMax / 2 + 1) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << '\n';
	}
}