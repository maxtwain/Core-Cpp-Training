/*
A large company pays its salespeople on a commission basis.  The salespeople each receive $200 per week plus 9% of their gross sales for that week.  For example, a salesperson who sells $500 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650.  Develop a C++ program that uses a while statement to input each salesperson's gross sales for last week and calculates and displays that salesperson's earnings.  Process one salesperson's figures at a time.
*/
#include <iostream>
#include <iomanip>

int main() {

	std::cout << "Enter sales in dollars (-1 to end): ";
	double sales;
	std::cin >> sales;
	while (sales != -1) {
		std::cout
			<< "Salary is: $"
			<< std::setprecision(2)
			<< std::fixed
			<< 200 + sales * 0.09
			<< "\n\nEnter sales in dollars (-1 to end): ";
		std::cin >> sales;
	}
}