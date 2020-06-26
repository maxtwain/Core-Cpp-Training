/*
Implement the following integer functions:

A) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.

B) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.

C) Use these functions to write a program that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees.  Print the outputs in a neat tabular format that minimizes the number of lines of output while remaining readable.
*/

#include <iostream>

using std::cout;

int celsius(int f);
int fahrenheit(int c);

int main() {
	
	for (int cel = 0; cel < 100; ++cel) {
		cout << cel << '\t' << fahrenheit(cel) << '\n';
	}
}

int celsius(int f) {
	return (f - 32) * 5 / 9;
}
int fahrenheit(int c) {
	return (c * 9 / 5) + 32;
}