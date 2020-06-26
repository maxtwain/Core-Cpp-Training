/*
Write a function that takes an integer value and returns the number with its digits reversed.  For example, given the number 7631, the function should return 1367.
*/

#include <iostream>

using std::cout;

int reverse(int num);

int main() {

	int num = 7631;

	cout << num
		<< " reversed = "
		<< reverse(num)
		<< '\n';
}

int reverse(int num) {

	int reverseNum{ 0 };
	while (num > 0) {
		reverseNum *= 10;
		reverseNum += num % 10;
		num /= 10;
	}

	return reverseNum;
}