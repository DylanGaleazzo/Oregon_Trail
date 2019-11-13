#include "General_Store.h"

General_Store::General_Store() 
{
	total = 0.0;
	priceOxen = 40.00;
	priceFood = 0.20;
	priceClothing = 10.00;
	priceAmmunition = 2.00;
}

~General_Store()
{
	cout << "leaving Dylan's General Store" << endl;
}

double get_Total() 
{
	return total;
}

double get_Price_Oxen() 
{
	return priceOxen;
}

double get_Price_Food() 
{
	return priceFood;
}

double get_Price_Clothing() 
{
	return priceClothing;
}

double get_Price_Ammunition() 
{
	return priceAmmuntion;
}

double change_Total(double item) 
{
	total = total + item;
	return total;
}

