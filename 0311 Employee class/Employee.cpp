#include <iostream>
#include "Employee.hpp"

Employee::Employee(
	std::string firstName,
	std::string lastName,
	int monthlySalary) :
	firstName{ firstName },
	lastName{ lastName } {
	if (monthlySalary < 0) {
		monthlySalary = 0;
	}
	Employee::monthlySalary = monthlySalary;
}

void Employee::setFirstName(std::string firstName) {
	Employee::firstName = firstName;
}
void Employee::setLastName(std::string lastName) {
	Employee::lastName = lastName;
}
void Employee::setMonthlySalary(int monthlySalary) {
	if (monthlySalary < 0) {
		monthlySalary = 0;
	}
	Employee::monthlySalary = monthlySalary;
}
std::string Employee::getFirstName() {
	return Employee::firstName;
}
std::string Employee::getLastName() {
	return Employee::lastName;
}
int Employee::getMonthlySalary() {
	return Employee::monthlySalary;
}

void Employee::raisePercent(int percent) {
	Employee::monthlySalary += Employee::monthlySalary * percent / 100;
}

void Employee::print() {
	std::cout << "First name = " << Employee::firstName << "\nLast name = " << Employee::lastName << "\nMonthly Salary = " << Employee::monthlySalary << "\n\n";
}