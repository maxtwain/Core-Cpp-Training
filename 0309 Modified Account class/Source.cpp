/*
Modify class Account (Fig 3.8) to provide a member function called withdraw that withdraws money from an Account.  Ensure that the withdrawal amount does not exceed the Account's balance.  If it does, the balance should be left unchanged and the member function should display a message indicating "withdrawal amount exceeded account balance."  Modify class AccountTest (Fig 3.9) to test member function withdraw.
*/

#include <iostream>
#include "Account.h"

void printResult(Account account1, Account account2);

int main() {
	Account account1{ "Jane Green", 50 };
	Account account2{ "John Blue", -7 };

	printResult(account1, account2);

	std::cout << "Enter deposit amount for account1: ";
	int amount;
	std::cin >> amount;
	std::cout << "adding " << amount << " to account1 balance\n\n";
	account1.deposit(amount);
	printResult(account1, account2);

	std::cout << "Enter deposit amount for account2: ";
	std::cin >> amount;
	std::cout << "adding " << amount << " to account2 balance\n\n";
	account2.deposit(amount);
	printResult(account1, account2);

	std::cout << "Enter withdrawal amount for account1: ";
	std::cin >> amount;
	std::cout << "adding " << amount << " to account1 balance\n\n";
	account1.withdraw(amount);
	printResult(account1, account2);

	std::cout << "Enter withdrawal amount for account2: ";
	std::cin >> amount;
	std::cout << "withdrawing " << amount << " from account2 balance\n\n";
	account2.withdraw(amount);
	printResult(account1, account2);

}

void printResult(Account account1, Account account2) {
	std::cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
	std::cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance() << "\n\n";
}