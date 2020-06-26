/*
Remove the continue statement from the program in Fig. 5.14.
*/

#include <iostream>

using std::cout;

int main() {
	for (unsigned int count{ 1 }; count < 5; count++) {
		cout << count << " ";
	}
	cout << "\nUsed continue to skip printing 5" << std::endl;
}