#include <string>

class Account {
private:
	unsigned int accountNumber;
	std::string firstName;
	std::string lastName;
	double balance;

public:
	Account(
		unsigned int accountNumber,
		std::string firstName,
		std::string lastName,
		double balance);

	void print();

};