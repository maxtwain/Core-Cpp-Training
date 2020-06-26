/*
Drivers are concerned with the mileage obtained by their automobiles.  One driver has kept track of several trips by recording miles driven and gallons used for each trip.  Develop a C++ program that uses a while statement to input the miles driven and gallons used for each trip.  The program should calculate and display the miles per gallon obtained for each trip and print the combined miles per gallon obtained for all tankfuls up to this point.
*/

#include <iostream>
#include <iomanip>

int main() {
	int miles{ 0 }, gallons{ 0 }, totalMiles{ 0 }, totalGallons{ 0 };

	std::cout << std::fixed << std::setprecision(6);
	std::cout << "Enter miles driven (-1 to quit): ";
	std::cin >> miles;
	while (miles != -1) {
		std::cout << "Enter gallons used: ";
		std::cin >> gallons;
		
		std::cout << "MPG this trip: " 
			<< (double)miles / gallons;
		
		totalMiles += miles;
		totalGallons += gallons;
		std::cout << "\nTotal MPG: " 
			<< (double)totalMiles / totalGallons 
			
			<< "\n\nEnter the miles driven (-1 to quit): ";
		std::cin >> miles;
	}

}
