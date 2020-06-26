#include <string>

class Account {
private:
	std::string name;
	int balance{ 0 };

public:
	Account(
		std::string accountName,
		int initialBalance);

	void deposit(int depositAmount);
	int getBalance() const;
	void setName(std::string accountName);
	std::string getName();
};