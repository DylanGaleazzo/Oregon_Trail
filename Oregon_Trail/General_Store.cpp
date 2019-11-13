#include "General_Store.h"

General_Store::General_Store() 
{
	total = 0.0;
	priceOxen = 40.00;
	priceFood = 0.20;
	priceClothing = 10.00;
	priceAmmunition = 2.00;
}

General_Store::~General_Store()
{
	cout << "leaving Dylan's General Store" << endl;
}

double General_Store::get_Total()
{
	return total;
}

double General_Store::get_Price_Oxen() 
{
	return priceOxen;
}

double General_Store::get_Price_Food()
{
	return priceFood;
}

double General_Store::get_Price_Clothing()
{
	return priceClothing;
}

double General_Store::get_Price_Ammunition()
{
	return priceAmmuntion;
}

double General_Store::change_Total(double moneyitem)
{
	total = total + item;
	return total;
}

void General_Store::reset_Total()
{
	total = 0;
}

