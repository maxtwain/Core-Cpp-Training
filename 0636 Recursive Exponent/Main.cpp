/*
Write a recursive function power(base, exponent) that, when invoked returns base^exponent.
*/

#include <iostream>

using std::cout;

int power(int base, int exponent);
int powerRecur(int num, int exponent);

int main() {

	cout << "2^3 = " << powerRecur(2, 3) << "\n\n";
}

int power(int base, int exponent) {
	
	int ret{ 1 };
	while (exponent > 0) {
		ret *= base;
		--exponent;
	}
	return ret;
}

int powerRecur(int num, int exponent) {

	if (exponent == 0) {
		return 1;
	}
	
	return powerRecur(num, exponent - 1) * num;
	
}