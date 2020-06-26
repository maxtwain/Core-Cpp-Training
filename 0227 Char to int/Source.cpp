/*
Here is a peek ahead.  In this chapter you learned about integers and the type int.  C++ can also represent uppercase letters, lowercase letters, and a considerable variety of special symbold. C++ uses small integers internally to represent each different character.  The set of characters a computer uses and the corresponding integer representations for those characters are call that computer's character set.  You can print a character by enclosing that character in single queens, as with 

cout << 'x'; // print an uppercase A

You can print the integer equivalent of a character using static_case as follows:

cout << static_cast<int>('A'); // print 'A' as an integer

This is called a cast operation (we formally introduce casts in Chapter 4).  When the preceding statement executes, it prints the value 65 (on systems that use the ASCII character set).  

Write a program that prints the integer equivalent of a character typed at the keyboard.  Store the input in a variable of type char.  Test your program several times using uppercase letters, lowercase letters, digits, and special characters (such as $".
*/

#include <iostream>

int main() {
	std::cout << "Character: ";
	char c;
	std::cin >> c;

	if (std::cin.fail()) {
		std::cout << "Invalid entry";
		return 1;
	}

	std::cout << "Integer equivalent = "
		<< static_cast<int>(c)
		<< "\n\n";
}