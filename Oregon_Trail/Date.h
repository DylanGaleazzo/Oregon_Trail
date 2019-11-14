//Dylan Galeazzo
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Date {
public:
	int month;
	int day;
	int year;
	Date();
	void addWeek();
	friend ostream& operator<<(ostream& os, const Date);
};
