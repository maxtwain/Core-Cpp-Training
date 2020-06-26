/*
An integer is said to be a perfect number if the sum of its divisors, including 1 (but not the number itself), is equal to the number.  For example, 6 is a perfect number, because 6 = 1 + 2 + 3.  Write a function isPerfect that determines whether parameter number is a perfect number.  Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.  Print the divisors of each perfect number to confirm that the number is indeed perfect.  Challenge the power of your computer by testing numbers much larger than 1000.
*/

#include <iostream>

using std::cout;

bool isPerfect(int num);
void printTest(int num);
void print1k();
void printDivisor(int num);

int main() {

	print1k();

	
		
}

void print1k() {
	cout << "Perfect\tDivisors\n";
	for (int i = 1; i <= 1000; ++i) {
		if (isPerfect(i)) {
			cout << i
				<< '\t';
			printDivisor(i);
			cout << '\n';
		}
	}
	cout << '\n';
}

void printDivisor(int num) {
	for (int i = 1; i < num; ++i) {
		if (num % i == 0) {
			cout << i
				<< ' ';
		}
	}
}

bool isPerfect(int num) {

	int sum = 1;
	for (int divisor = 2; divisor < num; ++divisor) {
		if (num % divisor == 0) {
			sum += divisor;
		}
	}
	return sum != 1 && sum == num ? true : false;
}

void printTest(int num) {
	cout << num
		<< " IS ";

	if (!isPerfect(num)) {
		cout << "NOT ";
	}

	cout << "perfect.\n";
}