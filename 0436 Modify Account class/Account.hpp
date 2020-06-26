#include <string>

class Account {
private:
	std::string name;
	double balance{ 0.00 };

public:
	Account(std::string accountName, double initialBalance);
	
	void deposit(double depositAmount);
	void withdraw(double withdrawAmount);
	double getBalance() const;
	void setName(std::string accountName);
	std::string getName() const;

};