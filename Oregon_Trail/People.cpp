#include "People.h"

People::People()
{
	this->name = "";
	this->isAlive = true;
}

People::People(string name, bool isAlive)
{
	this->name = name;
	this->isAlive = isAlive;
}

People::~People()
{
	cout << name << " has died." << endl;
}

string People::get_Name()
{
	return this->name;
}

inline bool People::get_Alive_Status()
{
	return this->isAlive;
}

void People::set_Name(string name)
{
	this->name = name;
}