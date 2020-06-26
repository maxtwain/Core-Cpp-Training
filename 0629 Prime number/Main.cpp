/*
An integer is said to be prime if it's divisible by only 1 and itself.  For example, 2, 3, 5, and 7 are prime, but 4, 6, 8, and 9 are not.

A) Write a function that determines whether a number is prime.

B) Use this function in a program that determines and prints all the prime numbers between 2 and 10,000.
*/

#include <iostream>

using std::cout;

bool isPrime(int num);
void printPrimesToLimit(int limit);

int main() {

	printPrimesToLimit(1000);
}

bool isPrime(int num) {

	if (num == 2) {
		return true;
	}
	if (num % 2 == 0) {
		return false;
	}

	for (int divisor = 3; divisor * divisor <= num; divisor += 2) {
		if (num % divisor == 0) {
			return false;
		}
	}
	return true;
}

void printPrimesToLimit(int limit) {
	
	for (int num = 2; num <= limit; ++num) {
		if (isPrime(num)) {
			cout << num
				<< '\n';
		}
	}
	cout << '\n';
}