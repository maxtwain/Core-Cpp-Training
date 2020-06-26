/*
An online retailer sells five products whose retail prices are as follows: Product 1, $2.98; product 2, $4.50; product 3, $9.98; product 4, $4.49; product 5, $6.87.  Write an application that reads a series of pairs of numbers as follows:

A) product number
B) quantity sold

Your program should use a switch statement to determine with retail price for each product.  It should calculate and display the total retail value of all products sold.  Use a sentinel controlled loop to determine when the program should stop looping and display the final results.
*/

#include <iostream>

using std::cout;
using std::cin;

double getTotal(int product, int quantity);

int main() {

	cout << "Enter product number / quantity sold: ";
	int product, quantity;
	double total{ 0 };
	cin >> product >> quantity;
	while (product != -1) {
		total += getTotal(product, quantity);
		cout << "Enter product number / quantity sold: ";
		cin >> product >> quantity;
	}

	cout << "Total = $" 
		<< total 
		<< "\n\n";

}

double getTotal(int product, int quantity) {
	double total;
	switch (product) {
	case 1:
		return 2.98 * quantity;
	case 2:
		return 4.5 * quantity;
	case 3:
		return 9.98 * quantity;
	case 4:
		return 4.49 * quantity;
	case 5:
		return 6.87 * quantity;
	default:
		return 0.00;
	}
}