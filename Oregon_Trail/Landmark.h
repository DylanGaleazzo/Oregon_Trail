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
	virtual int isFort() = 0;
};

class Fort:public Landmark
{
public:
	std::ostream& operator<<(std::ostream& os);
	int is_Fort() { return 1; }
};

class River:public Landmark
{
public:
	std::ostream& operator<<(std::ostream& os);
	int is_Fort() { return 2; }
};

class Other :public Landmark
{
public:
	std::ostream& operator<<(std::ostream& os);
	int is_Fort() { return 3; }
};
