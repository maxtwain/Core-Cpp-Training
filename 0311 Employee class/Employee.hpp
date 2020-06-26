#pragma once
#include <string>

class Employee {
private:
	std::string firstName;
	std::string lastName;
	int monthlySalary;

public:
	Employee(
		std::string firstName,
		std::string lastName,
		int monthlySalary);

	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setMonthlySalary(int monthlySalary);
	std::string getFirstName();
	std::string getLastName();
	int getMonthlySalary();
	
	void raisePercent(int percent);
	void print();
};