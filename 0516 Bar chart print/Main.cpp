/*
One interesting application of computers is to display graphs and bar charts.  Write an application that reads five numbers between 1 and 30.  For each number that's read, your program should display the same number of adjacent asterisks.  For example, if your program reads the number 7, it should display *******.  Display the bars of asterisks after you read in all five numbers.
*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;

int main() {

	int mag[5];
	for (int i = 0; i < 5; ++i) {
		cout << "Enter a number (1-30): ";
		cin >> mag[i];
		while (mag[i] < 0 || mag[i] > 30) {
			cout << "Invalid entry.  Try again: ";
			cin >> mag[i];
		}
	}
	cout << '\n';

	for (int i = 0; i < 5; ++i) {
		cout << std::setw(2) << mag[i] << " ";
		while (mag[i] > 0) {
			cout << '*';
			--mag[i];
		}
		cout << "\n";
	}
	cout << "\n";
}