//Dylan Galeazzo
#include "Date.h"

Date::Date()
{
	month = 4;
	day = 1;
	year = 1848;
}

void Date::addWeek()
{
	day += 7;
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 31))
	{
		month++;
		day = day % 31;
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30))
	{
		month++;
		day = day % 30;
	}
}

// ostream& operator<<(ostream& os, const Date& date)
// {
// 	string strMonth[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
// 	os << strMonth[date.month] << " " << date.day << ", " << date.year;
// }
