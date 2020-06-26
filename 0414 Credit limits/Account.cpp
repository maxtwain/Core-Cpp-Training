#include <iostream>
#include <iomanip>
#include "Account.hpp"

Account::Account() {}

double Account::getNewBalance() const {
	return
		Account::initialBalance +
		Account::debit -
		Account::credit;
}

int Account::getAccountNumber() const {
	return Account::accountNumber;
}

bool Account::limitExceeded() {
	return Account::getNewBalance() > Account::creditLimit;
}

void Account::printReport() {
	
	std::cout << "New balance is "
		<< Account::getNewBalance();

	if (Account::limitExceeded()) {
		int const COLWIDTH = 15;
		std::cout << std::setw(COLWIDTH)
			<< std::left
			<< "\nAccount: "
			<< Account::accountNumber
			<< std::setw(COLWIDTH)
			<< std::left
			<< "\nCredit limit: "
			<< Account::creditLimit
			<< std::setw(COLWIDTH)
			<< std::left
			<< "\nBalance: "
			<< Account::getNewBalance()
			<< "\nCredit Limit Exceeded.";
	}

	std::cout << "\n\n";
}

void Account::setAccountNumber(int accountNumber) {
	Account::accountNumber = accountNumber;
}

void Account::setInitialBalance(double initialBalance) {
	Account::initialBalance = initialBalance;
}

void Account::setDebit(double debit) {
	Account::debit = debit;
}

void Account::setCredit(double credit) {
	Account::credit = credit;
}

void Account::setCreditLimit(double creditLimit) {
	Account::creditLimit = creditLimit;
}