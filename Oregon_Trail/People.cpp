#include "People.h"

People::People(string name, bool isAlive)
{
	this->name = name;
	this->isAlive = isAlive;
}

inline People::~People()
{
	cout << name << " has died." << endl;
}

inline string People::get_Name()
{
	return this->name;
}

inline bool People::get_Alive_Status()
{
	return this->isAlive;
}
