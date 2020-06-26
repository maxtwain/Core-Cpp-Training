
#include "Account.hpp"

Account::Account(
	std::string accountName,
	int initialBalance) :
	name{ accountName } {
	if (initialBalance > 0) {
		Account::balance = initialBalance;
	}
}

void Account::deposit(int depositAmount) {
	if (depositAmount > 0) {
		Account::balance += depositAmount;
	}
}

int Account::getBalance() const{
	return Account::balance;
}

void Account::setName(std::string accountName) {
	Account::name = accountName;
}

std::string Account::getName() {
	return Account::name;
}