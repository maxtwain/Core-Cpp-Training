/*
Modify the program of Exercise 6.34 to count the number of guesses the player makes.  If the number is 10 or fewer, print "Either you know the secret or you got lucky!"  If the player guesses the number in 10 tries, then print "Ahah!  You know the secret!"  If the player makes more than 10 guesses, then print "You should be able to do better!"
*/

#include <iostream>
#include <random>

using std::cout;
using std::cin;

int main() {

	std::random_device seed;
	std::default_random_engine algorithm(seed());
	std::uniform_int_distribution<int> range{ 1, 1000 };
	int answer = range(algorithm);

	cout << "I have a number between 1 and 1000.\n"
		<< "Can you guess my number?\n"
		<< "Please type your first guess: ";

	int guess;
	cin >> guess;
	int guessCount{ 1 };
	while (guess != answer) {
		if (guess < answer) {
			cout << "Too low.  Try again.\n";
		}
		else {
			cout << "Too high.  Try again.\n";
		}
		cin >> guess;
		++guessCount;
	}

	if (guessCount < 10) {
		cout << "Either you know the secret or you got lucky!\n\n";
	}
	else if (guessCount == 10) {
		cout << "Ahah!  You know the secret!\n\n";
	}
	else {
		cout << "You should be able to do better!\n\n";
	}

}