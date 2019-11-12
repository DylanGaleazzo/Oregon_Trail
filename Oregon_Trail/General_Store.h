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
	double get_Total();
	double get_Price_Oxen();
	double get_Price_Food();
	double get_Price_Clothing();
	double get_Price_Ammunition();
	double get_Price_Parts();
	double change_Total();
};
