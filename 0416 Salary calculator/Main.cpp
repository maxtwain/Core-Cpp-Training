/*
Develop a C++ program that uses a while statement to determine the gross pay for each of several employees.  The company pays "strait time" for the first 40 hours worked by each employee and pays "time and a half" for all hours worked in excess of 40 hours.  You are given a list of the employees of the company, the number of hours each employee worked last week, and the hourly rate of each employee.  Your program should input this information for each employee and should determine and display the employee's gross pay.
*/

#include <iostream>
#include <iomanip>

int main() {

	std::cout << "Enter hours worked (-1 to end): ";
	int hours;
	double rate;
	double salary;
	std::cin >> hours;
	while (hours != -1) {

		std::cout << "Enter hourly rate of the employee ($00.00): ";
		std::cin >> rate;

		salary = hours * rate;
		if (hours > 40) {
			salary += (hours - 40) * 0.5 * rate;
		}

		std::cout
			<< "Salary is $"
			<< std::setprecision(2)
			<< std::fixed
			<< salary
			<< "\n\nEnter hours worked (-1 to end): ";
		
		std::cin >> hours;
	}
}