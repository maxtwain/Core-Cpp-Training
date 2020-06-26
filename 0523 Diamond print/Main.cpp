/*
Write an application that prints the following diamond shape.  You may use output statements that print a single asterisk, a single space, or a single newline character.  Maximize your use of iteration (with nested for statements), and minimize the number of output statements.
*/

#include <iostream>

using std::cout;

int main() {

	for (int row = 0; row < 9; ++row) {
		for (int col = 0; col < 9; ++col) {
			if (row + col > 3 &&
				row + col < 13 &&
				row - col < 5 &&
				col - row < 5) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << '\n';
	}
}