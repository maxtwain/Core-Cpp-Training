#include <iostream>
#include "Account.hpp"

Account::Account(
	unsigned int accountNumber,
	std::string firstName,
	std::string lastName,
	double balance):
	accountNumber{ accountNumber },
	firstName{ firstName },
	lastName{ lastName },
	balance{ balance } {}

void Account::print() {
	std::cout << "Account Number = " << Account::accountNumber << "\nFirst name = " << Account::firstName << "\nLast name = " << lastName << "\nBalance = " << balance << "\n";
}