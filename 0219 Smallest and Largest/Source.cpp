/*
Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest, and largest of these numbers.  The screen dialog should appear as follows:

Input three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27

*/

#include<iostream>

void compare(int& small, int& large, int n0, int n1, int n2);

int main() {
	std::cout << "Input three different integers: ";
	int n0, n1, n2;
	std::cin >> n0 >> n1 >> n2;

	std::cout
		<< "Sum is " << n0 + n1 + n2
		<< "\nAverage is " << (n0 + n1 + n2) / 3
		<< "\nProduct is " << n0 * n1 * n2
		<< "\nSmallest is ";

	int small = n0;
	int large = n0;
	compare(small, large, n0, n1, n2);

	std::cout << small
		<< "\nLargest is " << large
		<< "\n\n";

}

void compare(int& small, int& large, int n0, int n1, int n2) {
	if (n0 < n1) {
		large = n1;
		if (n1 < n2) {
			large = n2;
		}

		if (n0 > n2) {
			small = n2;
		}
	}
	else {
		small = n1;
		if (n1 > n2) {
			small = n2;
		}

		if (n0 < n2) {
			large = n2;
		}
	}
}