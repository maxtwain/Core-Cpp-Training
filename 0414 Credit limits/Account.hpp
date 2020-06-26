

class Account {
private:
	int accountNumber{ 0 };
	double initialBalance{ 0 };
	double debit{ 0 };
	double credit{ 0 };
	double creditLimit{ 0 };

	double getNewBalance() const;
	int getAccountNumber() const;
	bool limitExceeded();

public:
	Account();

	void setAccountNumber(int accountNumber);
	void setInitialBalance(double initialBalance);
	void setDebit(double debit);
	void setCredit(double credit);
	void setCreditLimit(double creditLimit);

	void printReport();
};