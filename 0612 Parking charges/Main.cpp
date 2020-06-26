/*
A parking garage charges a $20.00 minimum fee to park for up to three hours.  The garage charges an additional $5.00 per hour for each hour or part therof in excess if three hours.  The maximum charge for any given 24 hour period is $50.00.  Assume that no car parks for longer than 24 hours at a time.  Write a program that calculates and prints the parking charges for each of three customers who parked their cars in this garage yesterday.  You should enter the hours parked for each customer.  Your program should print the results in a neat tabular format and should calculate and print the total of yesterday's receipts.  The program should use the function calculateCharges to determine the charge for each customer.  You outputs should appear in the following format:
*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;

double calculateCharges(double hoursParked);

int main() {
	
	cout << std::fixed << std::setprecision(2);

	double totalHours{ 0 };
	double totalCharges{ 0 };

	double hoursParked[3];
	for (int i = 0; i < 3; ++i) {
		cout << "Car 1 hours parked: ";
		std::cin >> hoursParked[i];

		totalHours += hoursParked[i];
		totalCharges += calculateCharges(hoursParked[i]);

	}
	std::cout << '\n';

	cout << "Car\t" << "Hours\t" << "Charge\n";
	for (int car = 1; car <= 3; ++car) {
		
		cout << car 
			<< "\t" 
			<< hoursParked[car - 1] 
			<< "\t" 
			<< calculateCharges(hoursParked[car - 1]) 
			<< "\n";
	}
	cout << "TOTAL\t" << totalHours << "\t" << totalCharges << "\n\n";
}

double calculateCharges(double hoursParked) {
	
	double charges = 20.00;
	if (hoursParked > 3) {
		charges += (ceil(hoursParked) - 3) * 5;
	}

	if (charges > 50) {
		return 50;
	}
	else {
		return charges;
	}
}