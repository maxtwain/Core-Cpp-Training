/*
Write a program that simulates coin tossing.  For each toss of the coin, the program should print Heads or Tails.  Let the program toss the coin 100 times and count the number of times each side of the coin appears.  Print the results.  The program should call a separate function flip that takes no arguments and returns 0 for tails and 1 for heads.
*/

#include <iostream>
#include <random>

using std::cout;

int flip();

int main() {

	int headCount = 0;
	for (int i = 0; i < 100; ++i) {
		
		int result = flip();
		if (result == 0) {
			++headCount;
			
		}
		cout << result
			<< "\n";
	}

	cout << headCount
		<< "\n\n";
}

int flip() {

	std::random_device seed;
	std::default_random_engine algorithm(seed());
	std::uniform_int_distribution<int> range{ 0, 1 };

	return range(algorithm);
}