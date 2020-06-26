/*
Write an application hat displays the following patterns separately, one below the other.  Use for loops to generate the patterns.  All asterisks (*) should be printed by a single statement of the form cout << '*'; which causes the asterisks to print side by side.  A statement of the form cout << '\n'; can be used to move to the next line.  A statement of the form cout << ' '; can be used to display a space for the last two patterns.  There should be no other output statements in the program.
*/

#include <iostream>

using std::cout;

void patternA();
void patternB();
void patternC();
void patternD();

int main() {

	patternA();
	patternB();
	patternC();
	patternD();

}

void patternA() {
	cout << "Pattern A\n";
	for (int row = 0; row < 10; ++row) {
		for (int col = 0; col < 10; ++col) {
			if (row >= col) {
				cout << '*';
			}
			else {
				break;
			}
		}
		cout << '\n';
	}
	cout << "\n\n";
}

void patternB() {
	cout << "Pattern B\n";
	for (int row = 0; row < 10; ++row) {
		for (int col = 0; col < 10; ++col) {
			if (row + col < 10) {
				cout << '*';
			}
			else {
				break;
			}
		}
		cout << '\n';
	}
	cout << "\n\n";
}

void patternC() {
	cout << "Pattern C\n";
	for (int row = 0; row < 10; ++row) {
		for (int col = 0; col < 10; ++col) {
			if (col >= row) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << '\n';
	}
	cout << "\n\n";
}

void patternD() {
	cout << "Pattern D\n";
	for (int row = 0; row < 10; ++row) {
		for (int col = 0; col < 10; ++col) {
			if (row + col > 8) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << '\n';
	}
	cout << "\n\n";
}