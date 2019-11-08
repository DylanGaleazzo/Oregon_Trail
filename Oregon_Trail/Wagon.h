#pragma once

#include <iostream>
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
	int parts;


public:
	Wagon();
	Wagon(string occupation, double money, int oxen, int food, int clothing, int ammunition, int parts);
	~Wagon();
	string get_Occupation();
	double get_Money();
	int get_People_Alive();
	int get_Oxen();
	int get_Food();
	int get_Clothing();
	int get_Ammunition();
	int get_Parts();
	void kill_Person();
};