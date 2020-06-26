/*
In Fig. 3.9, the main function contains six statements (lines 14-15, 16-17, 26-27, 28-29, 37-38, and 39-40) that each display an Account object's name and balance.  Study these statements and you'll notice that they differ only in the Account object being manipulated - account1 or account2.  In this exercise, you'll define a new displayAccount function that contains one copy of that output statement.  The member function's parameter will be an Account object and the member function will output the object's name and balance.  You'll then replace the six duplicated statements in main with calls to displayAccount, passing as an argument the specified Account object to output.

Modify Fig. 3.9 to define the following displayAccount function after the using directive and before main:

void displayAccount(Account accountToDisplay){
	// place the statements that displays
	// accountToDisplay's name and balance here
}

Replace the comment in the member function's body with a statement that displays accountToDisplay's name and balance.

Once you've completed dislayAccount's declaration, modify main to replace the statements that display each Account's name and balance with calls to displayAccount of the form:

dispalyAccount(nameOfAccountObject);

In each call, the argument should be the account 1 or account 2 object as appropriate.  Then, test the updated program to ensure that it produces the same output as shows in Fig. 3.9.
*/

#include <iostream>
#include "Account.hpp"

void displayAccount(Account AccountToDisplay);

int main() {
	Account account1{ "Jane Green", 50 };
	Account account2{ "John Blue", -7 };

	displayAccount(account1);
	displayAccount(account2);

	std::cout << "\n\nEnter deposit amount for account1: ";
	int depositAmount;
	std::cin >> depositAmount;
	std::cout << "adding " << depositAmount << " to account1 balance\n";
	account1.deposit(depositAmount);

	displayAccount(account1);
	displayAccount(account2);

	std::cout << "\n\nEnter deposit amount for account2: ";
	std::cin >> depositAmount;
	std::cout << "adding " << depositAmount << " to account2 balance\n";
	account2.deposit(depositAmount);

	displayAccount(account1);
	displayAccount(account2);

	std::cout << "\n";
}

void displayAccount(Account accountToDisplay) {
	std::cout << "\n" << accountToDisplay.getName() << " balance is $" << accountToDisplay.getBalance();
}