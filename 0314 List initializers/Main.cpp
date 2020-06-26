/*
Write a statement that uses list initialization to initialize an object of class Account which provides a constructor that receives an unsigned int, two strings, and a double to initialize the accountNumber, firstName, lastName, and balance data members of a new object of the class.
*/
#include "Account.hpp"

int main() {

	Account a0{ 43, "Lona", "Moe", 76.97 };

	a0.print();
}