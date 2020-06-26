
#include <iostream>
#include "Date.hpp"

Date::Date(
	int month,
	int day,
	int year) :
	day{ day },
	year{ year } {
	if (month < 0 || month > 12) {
		month = 1;
	}
	Date::month = month;
}

int Date::getMonth() {
	return Date::month;
}
int Date::getDay() {
	return Date::day;
}
int Date::getYear() {
	return Date::year;
}

void Date::setMonth(int month) {
	if (month < 0 || month > 12) {
		month = 1;
	}
	Date::month = month;
}

void Date::setDay(int day) {
	Date::day = day;
}

void Date::setYear(int year) {
	Date::year = year;
}

void Date::displayDate() {
	std::cout << Date::month << "/" << Date::day << "/" << Date::year << "\n\n";
}