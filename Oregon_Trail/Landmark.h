//Dylan Galeazzo
#pragma once
#include "Wagon.h"
#include "Date.h"

class LandMark
{
private:
	Wagon wagon;
	string name;
	Date date;
public:
	string get_Name();
	Wagon get_Wagon();
	virtual bool isFort();
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
