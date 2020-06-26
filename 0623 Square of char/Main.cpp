/*
Modify the function created in Exercise 6.22 to form the square out of whatever character is contained in character parameter fillCharacter.
*/

#include <iostream>

using std::cout;

void printSquare(int side, char fillCharacter);

int main() {

	printSquare(3, '*');
	printSquare(4, '9');
	printSquare(5, 'k');

}

void printSquare(int side, char fillCharacter) {

	for (int row = 0; row < side; ++row) {
		for (int col = 0; col < side; ++col) {
			cout << fillCharacter;
		}
		cout << '\n';
	}
	cout << '\n';
}