//Dylan Galeazzo
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Date {
private:
	int month;
	int day;
	int year;
public:
	Date();
	void addWeek();
	friend ostream& operator<<(ostream& os, const Date&);
};
