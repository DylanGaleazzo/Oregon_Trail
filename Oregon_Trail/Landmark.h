//Dylan Galeazzo
#pragma once
#include "Wagon.h"

class Landmark
{
public:
	Wagon wagon;
	string name;
	Date date;
	int miles;
	virtual bool isFort() = 0;
};

class Fort:public Landmark
{
public:
	ostream& operator<<(ostream& os);
	bool isFort() { return true; }
};

class River:public Landmark
{
public:
	ostream& operator<<(ostream& os);
	bool isFort() { return false; }
};
