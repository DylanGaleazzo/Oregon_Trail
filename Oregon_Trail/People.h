#pragma once

#include <string>
#include <iostream>
using namespace std;

class People
{
private:
	string name;
	bool isAlive;
public:
	People(string, bool);
	~People();
	string get_Name();
	bool get_Alive_Status();
};