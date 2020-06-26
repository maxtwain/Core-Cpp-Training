#include <string>
#include <iostream>
#include "Invoice.hpp"

Invoice::Invoice(
	std::string partNumber,
	std::string partDescription,
	int quantity,
	int unitPrice)
	: partNumber{ partNumber }
	, partDescription{ partDescription }
	, quantity{ quantity }
	, unitPrice{ unitPrice } {

}

std::string Invoice::getPartNumber() {
	return Invoice::partNumber;
}
std::string Invoice::getPartDescription() {
	return Invoice::partDescription;
}

int Invoice::getQuantity() {
	return Invoice::quantity;
}

int Invoice::getUnitPrice() {
	return Invoice::unitPrice;
}

void Invoice::print() {
	std::cout << "Part Number = " << Invoice::partNumber << "\nPart Description = " << Invoice::partDescription << "\nQuantity = " << Invoice::quantity << "\nUnit Price = " << Invoice::unitPrice << "\nInvoice Amount = " << Invoice::getInvoiceAmount() << "\n";
}

int Invoice::getInvoiceAmount() {
	if (Invoice::quantity < 0) {
		Invoice::quantity = 0;
	}
	if (Invoice::unitPrice < 0) {
		Invoice::unitPrice = 0;
	}
	return Invoice::quantity * Invoice::unitPrice;
}