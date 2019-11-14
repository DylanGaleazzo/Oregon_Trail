//Dylan Galeazzo
#pragma once
#include "Wagon.cpp"

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
	River(string name, int miles, Wagon wagon);
	ostream& operator<<(ostream& os);
	int is_Fort() { return 2; }
};

class River:public LandMark
{
public:
