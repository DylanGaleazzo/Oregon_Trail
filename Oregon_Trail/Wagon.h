#include "Person.h"
#include "Date.h"
#include <iostream>
#pragma once
using namespace std;

class Wagon
{
private:
    std::string occupation;
	std::string leader;

    int peopleAlive;
    Person people[5];

public:
    double money;
    int oxen;
    int food;
    int clothing;
    int ammunition;
    int parts;
    int rations;
	Date date;

    Wagon();
    Wagon(std::string occupation);
    ~Wagon();
	std::string get_Occupation();
	std::string get_Leader();
    Person get_Person(int index);
    int alive_Count();
    void kill_Person(int index);

    friend ostream &
    operator<<(ostream &os, const Wagon &w);
};
