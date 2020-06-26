/*
Write a function that displays at the left margin of the screen a solid square of asterisks whose side is specified in integer parameter side.
*/

#include <iostream>

using std::cout;

void printSquare(int side);

int main() {

	printSquare(3);
	printSquare(4);
	printSquare(5);

}

void printSquare(int side) {
	for (int row = 0; row < side; ++row) {
		for (int col = 0; col < side; ++col) {
			cout << '*';
		}
		cout << '\n';
	}
	cout << '\n';
}