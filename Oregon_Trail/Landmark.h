//Dylan Galeazzo
#pragma once
#include "Wagon.cpp"

class LandMark
{
private:
	Wagon wagon;
	string name;
<<<<<<< HEAD
	int miles;
	virtual int isFort() = 0;
};

class Fort:public Landmark
{
public:
	Fort(string name, int miles, Wagon wagon);
	ostream& operator<<(ostream& os);
	int is_Fort() { return 1; }
=======
	Date date;
public:
	string get_Name();
	Wagon get_Wagon();
	virtual bool isFort();
>>>>>>> parent of fe36c92... Merge branch 'master' of https://github.com/DylanGaleazzo/Oregon_Trail
};

class Fort:public LandMark
{
public:
<<<<<<< HEAD
	River(string name, int miles, Wagon wagon);
	ostream& operator<<(ostream& os);
	int is_Fort() { return 2; }
=======
	ostream& operator<<(ostream& os);
	bool isFort() { return true; }
>>>>>>> parent of fe36c92... Merge branch 'master' of https://github.com/DylanGaleazzo/Oregon_Trail
};

class River:public LandMark
{
public:
<<<<<<< HEAD
	Other(string name, int miles, Wagon wagon);
	ostream& operator<<(ostream& os);
	int is_Fort() { return 3; }
=======
	ostream& operator<<(ostream& os);
	bool isFort() { return false; }
>>>>>>> parent of fe36c92... Merge branch 'master' of https://github.com/DylanGaleazzo/Oregon_Trail
};
