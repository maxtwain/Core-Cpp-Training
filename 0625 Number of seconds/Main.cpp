/*
Write a function that takes the time as three integer arguments (hours, minutes, and seconds,), and returns the number of seconds since the last time the clock struck 12.  Use this function to calculate the amount of time in seconds between two times, both of which are within one 12 hour cycle of the clock.
*/

#include <iostream>

using std::cout;

int toSeconds(int hour, int minute, int second);

int main() {

	cout << toSeconds(4, 40, 32) << '\n';
}

int toSeconds(int hour, int minute, int second) {
	minute += hour * 60;
	second += minute * 60;
	return second;
}