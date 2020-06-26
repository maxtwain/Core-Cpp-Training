/*
The factorial of a nonnegative integer n is written n! (pronounced "n factorial") and is defined as follows:

n! = n * (n - 1) * (n - 2) * ... * 1 (for values of n greater than 1)

and

n! = 1 (for n = 0 or n = 1).

For example, 5! = 5 * 4 * 3 * 2 * 1, which is 120.  Use while statements in each of the following:

A) Write a program that reads a nonnegative integer and computes and prints its factorial.

B) Write a program that estimates the value of the mathematical constant e by using the formula:

e = 1 + 1/1! + 2/2! + 3/3! + ...

Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).

C) Write a program that computes the value of e^x by using the formula

e^x = 1 + x^1/1! + x^2/2! + x^3/3! + ...

Prompt the user for the desired accuracy of e.
*/

#include <iostream>

void printFactorial();
int getFactorial(int num);
void printE();
void printEX();
double xPow(double x, double pow);

int main() {

	printEX();

}

void printFactorial() {

	std::cout << "Factorial to find: ";
	int num;
	std::cin >> num;
	
	std::cout << num << "! = ";

	int fact = getFactorial(num);

	std::cout << fact << "\n\n";
}

int getFactorial(int num) {

	int fact = 1;
	while (num > 1) {
		fact *= num;
		--num;
	}
	return fact;
}

void printE() {

	std::cout << "E accuracy: ";
	int accuracy;
	std::cin >> accuracy;

	std::cout << "e = ";

	double e = 1.0;
	while (accuracy > 0) {
		e += 1.0 / getFactorial(accuracy);
		--accuracy;
	}

	std::cout << e << "\n\n";

}

void printEX() {

	std::cout << "e^x.  x value: ";
	int x;
	std::cin >> x;

	std::cout << "Accuracy: ";
	int accuracy;
	std::cin >> accuracy;

	std::cout << "e^x = ";

	double e = 1.0;
	while (accuracy > 0) {
		e +=  xPow(x, accuracy) / getFactorial(accuracy);
		--accuracy;
	}

	std::cout << e << "\n\n";

}

double xPow(double x, double pow) {
	
	double product = 1;
	while (pow > 0) {
		product *= x;
		--pow;
	}
	return product;
}