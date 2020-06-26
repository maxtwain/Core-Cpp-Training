

class Date {
private:
	int month;
	int day;
	int year;

public:
	Date(
		int month,
		int day,
		int year);

	int getMonth();
	int getDay();
	int getYear();
	void setMonth(int month);
	void setDay(int day);
	void setYear(int year);

	void displayDate();

};