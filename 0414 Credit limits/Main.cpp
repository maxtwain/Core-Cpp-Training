/*
Develop a C++ program that will determine whether a department store customer has exceeded the credit limit on a charge account.  For each customer, the following facts are available:

A) Account number (an integer)
B) Balance at the beginning of the month
C) Total of all items charged by this customer this month
D) Total of all credits applied to this customer's account this month
E) Allowed credit limit

The program should use a while statement to input each of these facts, calculate the new balance (= beginning balance + charges - credits) and determine whether the new balance exceeds the customer's credit limit.  For those customers whose credit limit is exceeded, the program should display the customer's account number, credit limit, new balance, and the message: "Credit Limit Exceeded."
*/

#include <iostream>
#include "Account.hpp"

int main() {

	Account acc0;
	std::cout << "Enter account number (or -1 to quit): ";
	int userInt;
	double userDouble;
	std::cin >> userInt;
	while (userInt != -1) {
		acc0.setAccountNumber(userInt);

		std::cout << "Enter beginning balance: ";
		std::cin >> userDouble;
		acc0.setInitialBalance(userDouble);

		std::cout << "Enter total charges: ";
		std::cin >> userDouble;
		acc0.setDebit(userDouble);

		std::cout << "Enter total credits: ";
		std::cin >> userDouble;
		acc0.setCredit(userDouble);

		std::cout << "Enter credit limit: ";
		std::cin >> userDouble;
		acc0.setCreditLimit(userDouble);

		acc0.printReport();

		std::cout << "Enter account number (or -1 to quit): ";
		std::cin >> userInt;
	}

}

