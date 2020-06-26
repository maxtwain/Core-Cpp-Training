/*
Modify Exercise 5.15 to combine your code from the four separate triangles of asterisks such that all four patterns print side by side.
*/

#include <iostream>

using std::cout;

void patternA(int row);
void patternB(int row);
void patternC(int row);
void patternD(int row);

int main() {

	for (int row = 0; row < 10; ++row) {
		patternA(row);
		patternB(row);
		patternC(row);
		patternD(row);
		cout << '\n';
	}
	cout << '\n';
}

void patternA(int row) {
	for (int col = 0; col < 10; ++col) {
		if (row >= col) {
			cout << '*';
		}
		else {
			cout << ' ';
		}
	}
}

void patternB(int row) {
	for (int col = 0; col < 10; ++col) {
		if (row + col < 10) {
			cout << '*';
		}
		else {
			cout << ' ';
		}
	}
}

void patternC(int row) {
	for (int col = 0; col < 10; ++col) {
		if (col >= row) {
			cout << '*';
		}
		else {
			cout << ' ';
		}
	}
}

void patternD(int row) {
	for (int col = 0; col < 10; ++col) {
		if (row + col > 8) {
			cout << '*';
		}
		else {
			cout << ' ';
		}
	}
}