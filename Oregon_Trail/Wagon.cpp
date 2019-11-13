//Dylan Galeazzo
//Denise Valencia

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
	food = 0;
	rations = 1;
	distance = 0;
}

Wagon::Wagon(string occupation, double money, int oxen, int food, int clothing, int ammunition)
{
	this->occupation = occupation;
	this->money = money;
	peopleAlive = 5;
	this->oxen = oxen;
	this->food = food;
	this->clothing = clothing;
	this->ammunition = ammunition;
}

Wagon::~Wagon()
{
	cout << "Wagon destroyed" << endl;
}

string Wagon::get_Occupation()
{
	return this->occupation;
}

double Wagon::get_Money()
{
	return money;
}

void Wagon::lose_Money(double num)
{
	money = money - num;
}
int Wagon::get_Oxen()
{
	return oxen;
}

void Wagon::add_Oxen(int num)
{
	oxen = num + oxen;
}

int Wagon::get_Food()
{
	return food;
}

void Wagon::add_Food(int num)
{
	food = num + food;
}

int Wagon::get_Clothing()
{
	return clothing;
}

void Wagon::add_Clothing(int num)
{
	clothing = num + clothing;
}

int Wagon::get_Ammunition()
{
	return ammunition;
}

void Wagon::add_Ammunition(int num)
{
	ammunition = num + ammunition;
}

void Wagon::lose_Ammunition()
{
	ammunition--;
}

int Wagon::get_Distance()
{
	return distance;
}

int Wagon::get_Rations()
{
	return rations;
}

void Wagon::change_Rations(int num)
{
	rations = num;
}

Date Wagon::get_Date()
{
	return date;
}

void Wagon::eat_Food()
{
	food -= peopleAlive * 7 * rations;
}

int Wagon::get_People_Alive()
{
	return peopleAlive;
}

void Wagon::kill_Person()
{
	peopleAlive--;
}

void Wagon::show_Supplies()
{
	string cont;
	cout <<
		"***********************************" << endl <<
		"Your Supplies" << endl <<
		"***********************************" << endl <<
		"oxen              " << oxen << endl <<
		"pounds of food    " << food << endl <<
		"sets of clothing  " << clothing << endl <<
		"bullets           " << ammunition << endl <<
		"money             " << money << endl <<
		"***********************************" << endl <<
		"Press c to continue ";
	cin >> cont;
}
