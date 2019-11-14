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
};

class Fort:public Landmark
{
private:
	int typeOfLandmark = 1;
public:
	Fort(string name, int miles, Wagon wagon);
	int get_Landmark() { return typeOfLandmark; }
	ostream& operator<<(ostream& os);
};

class River:public Landmark
{
private:
	int typeOfLandmark = 2;
public:
	River(string name, int miles, Wagon wagon);
	int get_Landmark() { return typeOfLandmark; }
	ostream& operator<<(ostream& os);
};

class Other :public Landmark
{
private:
	int typeOfLandmark = 3;
public:
	Other(string name, int miles, Wagon wagon);
	int get_Landmark() { return typeOfLandmark; }
	ostream& operator<<(ostream& os);
};
