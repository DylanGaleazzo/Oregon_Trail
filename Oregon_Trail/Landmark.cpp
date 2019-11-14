//Dylan Galeazzo
#include "Landmark.h"

ostream& Fort::operator<<(ostream& os)
{
	cout << this->name << endl;
	cout << this->wagon.date << endl;
}

ostream& River::operator<<(ostream& os)
{
	string temp;
	cout << "You are at the " << this->name << " crossing" << endl;
	cout << this->wagon.date << endl << endl;	
}
