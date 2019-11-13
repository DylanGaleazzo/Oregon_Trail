#pragma once
#include "Wagon.h"
#include "River.h"
class Fort
{
private:
	Wagon wagon;
public:
	Fort();
	friend ostream& operator<<(ostream& os, const Fort&);
};

Fort::Fort()
{
	cout << "Welcome to the Fort" << endl;
}

ostream& operator<<(ostream& os, const Fort&)
{
	cout << 
}