//Dylan Galeazzo
#pragma once
#include "Wagon.h"

class Landmark
{
public:
	Wagon wagon;
	string name;
	int miles;
	virtual int isFort() = 0;
};

class Fort:public Landmark
{
public:
	Fort(string name, int miles, Wagon wagon);
	ostream& operator<<(ostream& os);
	int is_Fort() { return 1; }
};

class River:public Landmark
{
public:
	River(string name, int miles, Wagon wagon);
	ostream& operator<<(ostream& os);
	int is_Fort() { return 2; }
};

class Other :public Landmark
{
public:
	Other(string name, int miles, Wagon wagon);
	ostream& operator<<(ostream& os);
	int is_Fort() { return 3; }
};
