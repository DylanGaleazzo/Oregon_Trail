#pragma once

#include <iostream>
using namespace std;

class General_Store()
{
private:
	double total;
	double priceOxen;
	double priceFood;
	double priceClothing;
	double priceAmmunition;
	double priceParts;

public:
	General_Store();
	~General_Store();
	double get_Price_Oxen();
	double get_Money();
	int get_People_Alive();
	int get_Oxen();
	int get_Food();
	int get_Clothing();
	int get_Ammunition();
	int get_Parts();
	void kill_Person();
};
