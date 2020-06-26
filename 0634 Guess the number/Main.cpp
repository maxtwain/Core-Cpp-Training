/*
Write a program that plays the game of "guess the number" as follows.  Your program chooses the number to be guessed by selecting an integer at random in the range 1 to 1000.  The program then displays the following.

I have a number between 1 and 1000.
Can you guess my number?
Please type your first guess.

The player then types a first guess.  The program responds with one of the following

1. Excellent!  You guessed the number!
Would you like to play again (y or n)?

2. Too low. Try again.

3. Too high.  Try again.

If the player's guess is incorrect, your program should loop until the player finally gets the number right.  Your program should keep telling the player Too high or Too low to help the player "zero in" on the correct answer.
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
	while (guess != answer) {
		if (guess < answer) {
			cout << "Too low.  Try again.\n";
		}
		else {
			cout << "Too high.  Try again.\n";
		}
		cin >> guess;
	}

	cout << "Excellent!  You guessed the number!\n\n";
	
}