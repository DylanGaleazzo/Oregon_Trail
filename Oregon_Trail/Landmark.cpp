//Dylan Galeazzo
#include "Landmark.h"

<<<<<<< HEAD
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
=======
string LandMark::get_Name()
{
	return name;
>>>>>>> parent of fe36c92... Merge branch 'master' of https://github.com/DylanGaleazzo/Oregon_Trail
}

bool LandMark::isFort()
{

}

Wagon LandMark::get_Wagon()
{
	return wagon;
}

ostream& Fort::operator<<(ostream& os)
{
	cout << this->get_Name() << endl;
	cout << this->get_Wagon().date << endl;
}

ostream& River::operator<<(ostream& os)
{
	string temp;
	cout << "You are at the " << this->get_Name() << " crossing" << endl;
	cout << this->get_Wagon().date << endl << endl;
}