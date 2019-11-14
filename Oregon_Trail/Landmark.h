//Dylan Galeazzo
#pragma once
#include "Wagon.h"
#include "Date.h"

class LandMark
{
public:
	Wagon wagon;
	string name;
	Date date;
	int miles;
	virtual bool isFort() = 0;
};

class Fort:public LandMark
{
public:
	ostream& operator<<(ostream& os);
	bool isFort() { return true; }
};

class River:public LandMark
{
public:
	ostream& operator<<(ostream& os);
	bool isFort() { return false; }
};
