/*
Create a class called Employee that includes three pieces of information as data members - a first name (type string), a last name (type string), and a monthly salary (type int).  Your class should have a constructor that initializes the three data members.  Provide a set and a get function for each data memeber.  If the monthly salary is not positive, set it to 0.  Write a test program that demonstrates class Employee's capabilites.  Create two Employee objects and display each object's yearly salary.  Then give each Employee a 10 percent raise and display each Employee's yearly salary again.
*/
#include "Employee.hpp"

int main() {
	Employee jarl{ Employee("Jarl", "Henbrick", 100) };
	Employee olive{ Employee("Olive", "Markia", -100) };

	jarl.print();
	olive.print();

	jarl.raisePercent(10);
	olive.raisePercent(10);

	jarl.print();
	olive.print();
}