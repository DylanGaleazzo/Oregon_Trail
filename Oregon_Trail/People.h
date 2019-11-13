//Denise Valencia
//Anson Biggs
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
	People();
	People(string, bool);
	~People();
	string get_Name();
	bool get_Alive_Status();
	void set_Name(string);
};
