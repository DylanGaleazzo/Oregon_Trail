//Dylan Galeazzo
//Denise Valencia
//Anson Biggs
#pragma once
#include "date.h"
using namespace std;

class Wagon
{
private:
	string occupation;
	double money;
	int peopleAlive;
	int oxen;
	int food;
	int clothing;
	int ammunition;
	int rations;
	int pace;
	int distance;
	Date date;
public:
	Wagon();
	Wagon(string occupation, double money, int oxen, int food, int clothing, int ammunition);
	~Wagon();
	string get_Occupation();
	double get_Money();
	int get_People_Alive();
	int get_Oxen();
	void add_Oxen(int);
	int get_Food();
	void add_Food(int);
	int get_Clothing();
	void add_Clothing(int);
	int get_Ammunition();
	void add_Ammunition(int);
	int get_Pace();
	int get_Rations();
	int get_Distance();
	Date get_Date();
	void eat_Food();
	void kill_Person();
};