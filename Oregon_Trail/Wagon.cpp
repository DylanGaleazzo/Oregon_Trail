#include "Wagon.h"

Wagon::Wagon()
{
	occupation = "Banker";
	money = 16000.00;
	peopleAlive = 5;
	oxen = 0;
	food = 0;
	clothing = 0;
	ammunition = 0;
	parts = 0;
}

Wagon::Wagon(string occupation, double money, int oxen, int food, int clothing, int ammunition, int parts)
{
	this->occupation = occupation;
	this->money = money;
	peopleAlive = 5;
	this->oxen = oxen;
	this->food = food;
	this->clothing = clothing;
	this->ammunition = ammunition;
	this->parts = parts;
}

Wagon::~Wagon()
{
	cout << "Wagon destroyed" << endl;
}

inline string Wagon::get_Occupation()
{
	return this->occupation;
}

inline double Wagon::get_Money()
{
	return money;
}

inline int Wagon::get_Oxen()
{
	return oxen;
}

inline int Wagon::get_Food()
{
	return food;
}

inline int Wagon::get_Clothing()
{
	return clothing;
}

inline int Wagon::get_Ammunition()
{
	return ammunition;
}

inline int Wagon::get_Parts()
{
	return parts;
}

inline int Wagon::get_People_Alive()
{
	return peopleAlive;
}

void Wagon::kill_Person()
{
	peopleAlive--;
}
