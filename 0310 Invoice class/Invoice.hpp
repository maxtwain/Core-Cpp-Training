#pragma once
#include <string>

class Invoice {
private:
	std::string partNumber;
	std::string partDescription;
	int quantity;
	int unitPrice;
public:
	Invoice(
		std::string partNumber,
		std::string partDescription,
		int quantity,
		int unitPrice);

	std::string getPartNumber();
	std::string getPartDescription();
	int getQuantity();
	int getUnitPrice();
	void print();
	int getInvoiceAmount();
};