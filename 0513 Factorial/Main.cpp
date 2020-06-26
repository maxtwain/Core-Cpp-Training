/*
Write an application that calculates the factorials of 1 through 20.  Use type long.  Display the results in tabular format.
*/

#include <iostream>
#include <iomanip>

long factorial(long num);

using std::cout;

int main() {
	
	for (long num = 1; num <= 20; ++num) {
		cout << std::setw(2)
			<< num
			<< "! = "
			<< factorial(num)
			<< "\n";
	}
}

long factorial(long num) {
	long fact = 1;
	while (num > 1) {
		fact *= num--;
	}
	return fact;
}