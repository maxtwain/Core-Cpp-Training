/*
Remove the break statement from the application in Fig. 5.13.
*/

#include <iostream>

using std::cout;

int main() {
	unsigned int count;

	for (count = 1; count < 5; count++) {
		cout << count << " ";
	}

	cout << "\nBroke out of the loop at count = " << count << std::endl;
}