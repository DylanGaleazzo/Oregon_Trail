//Dylan Galeazzo
#include "Landmark.h"

int Fort::get_Landmark()
{ 
	return typeOfLandmark; 
}

int River::get_Landmark()
{
	return typeOfLandmark;
}

int Other::get_Landmark()
{
	return typeOfLandmark;
}

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
	os << "You have arrived at fort" << this->name << endl;
	os << this->wagon.date << endl;
	return os;
}

ostream& River::operator<<(ostream& os)
{
	string temp;
	os << "You have arrived at " << this->name << " River Crossing" << endl;
	os << this->wagon.date << endl << endl;
	return os;
}

ostream& Other::operator<<(ostream& os)
{
	os << "You have arrived at " << this->name << endl;
	os << this->wagon.date << endl << endl;
	return os;
}
