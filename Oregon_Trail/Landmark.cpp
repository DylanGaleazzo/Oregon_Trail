//Dylan Galeazzo
#include "Landmark.h"

Fort::Fort(string name, int miles, Wagon wagon)
{
	this->name = name;
	this->miles = miles;
	this->wagon = wagon;
}


River::River(string name, int miles, Wagon wagon)
{
	this->name = name;
	this->miles = miles;
	this->wagon = wagon;
}

Other::Other(string name, int miles, Wagon wagon)
{
	this->name = name;
	this->miles = miles;
	this->wagon = wagon;
}

ostream& Fort::operator<<(ostream& os)
{
	cout << "You have arrived at fort" << this->name << endl;
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
