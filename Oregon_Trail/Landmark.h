// Dylan Galeazzo
#pragma once
#include "Wagon.h"

class Landmark
{
public:
	Wagon wagon;
	string name;
	int miles;
	int typeOfLandmark;
	friend ostream& operator<<(ostream& os, Landmark landmark);
};

class Fort:public Landmark
{
public:
	Fort(string name, int miles, Wagon wagon);
	int get_Landmark();
	friend ostream& operator<<(ostream& os, Fort fort);
};

class River:public Landmark
{
public:
	River(string name, int miles, Wagon wagon);
	int get_Landmark();
	friend ostream& operator<<(ostream& os, River river);
};

class Other :public Landmark
{
private:
	int typeOfLandmark = 3;
public:
	Other(string name, int miles, Wagon wagon);
	int get_Landmark();
	friend ostream& operator<<(ostream& os, Other other);
};
