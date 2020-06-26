/*
Modify class Account (Exercise 3.9) to represent the balance data member as type double.  Also, display all double amounts with two digits to the right of the decimal point.
*/


#include <iostream>
#include <iomanip>
#include "Account.hpp"

void printResult(Account account1, Account account2);

int main() {
	Account account1{ "Jane Green", 50.00 };
	Account account2{ "John Blue", -7.00 };

	std::cout << std::fixed << std::setprecision(2);

	printResult(account1, account2);

	std::cout << "Enter deposit amount for account1: ";
	double amount;
	std::cin >> amount;
	std::cout << "adding " 
		<< amount 
		<< " to account1 balance\n\n";

	account1.deposit(amount);
	printResult(account1, account2);

	std::cout << "Enter deposit amount for account2: ";
	std::cin >> amount;
	std::cout << "adding " 
		<< amount 
		<< " to account2 balance\n\n";

	account2.deposit(amount);
	printResult(account1, account2);

	std::cout << "Enter withdrawal amount for account1: ";
	std::cin >> amount;
	std::cout << "adding " 
		<< amount 
		<< " to account1 balance\n\n";

	account1.withdraw(amount);
	printResult(account1, account2);

	std::cout << "Enter withdrawal amount for account2: ";
	std::cin >> amount;
	std::cout << "withdrawing " 
		<< amount 
		<< " from account2 balance\n\n";

	account2.withdraw(amount);
	printResult(account1, account2);

}

void printResult(Account account1, Account account2) {
	std::cout << "account1: " 
		<< account1.getName() 
		<< " balance is $" 
		<< account1.getBalance();

	std::cout << "\naccount2: " 
		<< account2.getName() 
		<< " balance is $" 
		<< account2.getBalance() 
		<< "\n\n";
}