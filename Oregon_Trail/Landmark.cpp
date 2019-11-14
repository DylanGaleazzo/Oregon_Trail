//Dylan Galeazzo
#include "Landmark.h"

ostream& Fort::operator<<(ostream& os)
{
	cout << "You have arrived at " << this->name << endl;
	cout << this->wagon.date << endl;
}

ostream& River::operator<<(ostream& os)
{
	string temp;
	cout << "You have arrived at " << this->name << " River Crossing" << endl;
	cout << this->wagon.date << endl << endl;
}

ostream& Other::operator<<(ostream& os)
{
	cout << "You have arrived at " << this->name << endl;
	cout << this->wagon.date << endl << endl;
}
