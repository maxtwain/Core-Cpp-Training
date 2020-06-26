#include "Account.hpp"

Account::Account(std::string accountName, double initialBalance)
	: name{ accountName } {
	if (initialBalance >= 0) {
		balance = initialBalance;
	}
}

void Account::deposit(double depositAmount) {
	if (depositAmount > 0) {
		Account::balance += depositAmount;
	}
}

void Account::withdraw(double withdrawAmount) {
	if (withdrawAmount <= Account::balance) {
		Account::balance -= withdrawAmount;
	}
}

double Account::getBalance() const {
	return Account::balance;
}

void Account::setName(std::string accountName) {
	Account::name = accountName;
}

std::string Account::getName() const {
	return Account::name;
}