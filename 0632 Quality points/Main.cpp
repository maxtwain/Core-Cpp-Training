/*
Write a function qualityPoints that inputs a student's average and returns 4 if a student's average is 90-100, 3 if the average is 80-89, 2 if the average is 70-79, 1 if the average is 60-69, and 0 if the average is lower than 60.
*/

#include <iostream>

using std::cout;

int qualityPoints(int score);

int main() {

	int score = 95;

	cout << score
		<< " = "
		<< qualityPoints(score)
		<< " quality points\n\n";
}

int qualityPoints(int score) {

	if (score > 89) {
		return 4;
	}
	else if (score > 79) {
		return 3;
	}
	else if (score > 69) {
		return 2;
	}
	else if (score > 59) {
		return 1;
	}
	
	return 0;
}