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
	this->typeOfLandmark = 1;
}


River::River(string name, int miles, Wagon wagon)
{
	this->name = name;
	this->miles = miles;
	this->wagon = wagon;
	this->typeOfLandmark = 2;
}

Other::Other(string name, int miles, Wagon wagon)
{
	this->name = name;
	this->miles = miles;
	this->wagon = wagon;
	this->typeOfLandmark = 3;
}

ostream& operator<<(ostream& os, Landmark landmark)
{
	os << "You have arrived at" << landmark.name << endl;
	os << landmark.wagon.date << endl;
	return os;
}

ostream& operator<<(ostream& os, Fort fort)
{
	os << "You have arrived at" << fort.name << endl;
	os << fort.wagon.date << endl;
	return os;
}

ostream& operator<<(ostream& os, River river)
{
	os << "You have arrived at " << river.name << endl;
	os << river.wagon.date << endl << endl;
	return os;
}

ostream& operator<<(ostream& os, Other other)
{
	os << "You have arrived at " << other.name << endl;
	os << other.wagon.date << endl << endl;
	return os;
}
