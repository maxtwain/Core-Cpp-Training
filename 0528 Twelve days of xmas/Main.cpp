/*
Write an application that uses iteration and switch statements to print the song "The Twelve Days of Christmas."  One switch statement should be used to  print the day ("first," "second," and so on).  A separate switch statement should be used to print the remainder of each verse.
*/

#include <iostream>
#include <string>

using std::cout;

std::string getDay(int day);
std::string getVerse(int day);

int main() {

	for (int day = 1; day < 13; ++day) {
		cout << "On the "
			<< getDay(day)
			<< " day of Christmas my true love gave to me\n";
		for (int verse = day; verse > 0; --verse) {
			cout << getVerse(verse);
		}
		cout << "\n";
	}
}

std::string getDay(int day) {
	switch (day) {
	case 1:
		return "first";
	case 2:
		return "second";
	case 3:
		return "third";
	case 4:
		return "fourth";
	case 5:
		return "fifth";
	case 6:
		return "sixth";
	case 7:
		return "seventh";
	case 8:
		return "eighth";
	case 9:
		return "ninth";
	case 10:
		return "tenth";
	case 11:
		return "eleventh";
	case 12:
		return "twelfth";
	default:
		return " ";
	}
}

std::string getVerse(int day) {
	switch (day) {
	case 1:
		return "A partridge in a pear tree\n";
	case 2:
		return "Two turtle doves, and\n";
	case 3:
		return "Three french hens\n";
	case 4:
		return "Four colly birds\n";
	case 5:
		return "Five golden rings\n";
	case 6:
		return "Six geese a laying\n";
	case 7:
		return "Seven swans a swimming\n";
	case 8:
		return "Eight maids a milking\n";
	case 9:
		return "Nine ladies dancing\n";
	case 10:
		return "Ten lords a leaping\n";
	case 11:
		return "Eleven pipers piping\n";
	case 12:
		return "Twelve drummers drumming\n";
	}
}