/*
Write an iterative version of the function fibonacci from Fig. 6.26.
*/

#include <iostream>

using std::cout;

int fib(int seq);

int main() {

	cout << "fib(10) = "
		<< fib(10)
		<< "\n\n";
}

int fib(int seq) {

	if (seq == 0) {
		return 0;
	}
	else if (seq == 1) {
		return 1;
	}

	int prev0 = 0;
	int prev1 = 1;
	--seq;
	while (seq > 0) {
		prev1 += prev0;
		prev0 = prev1 - prev0;
		--seq;
	}

	return prev1;
}