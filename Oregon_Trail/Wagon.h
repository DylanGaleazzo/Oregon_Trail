#pragma once
#include "Person.h"
#include "Date.h"
#include <iostream>
using namespace std;

class Wagon
{
private:
    std::string occupation;
	std::string leader;

    int people_alive;
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
<<<<<<< HEAD
    Wagon(std::string occupation);
    ~Wagon();
	std::string get_Occupation();
	std::string get_Leader();
    Person get_Person(int index);
    int alive_Count();
    void kill_Person(int index);
=======
    Wagon(string occupation);
    Wagon(string occupation, double money, int oxen, int food, int clothing, int ammunition, int parts);
    ~Wagon();
    string get_occupation();
    string get_leader();
    Person get_person(int index);
    int alive_count();
    void kill_person(int index);
>>>>>>> parent of fe36c92... Merge branch 'master' of https://github.com/DylanGaleazzo/Oregon_Trail

    friend ostream &
    operator<<(ostream &os, const Wagon &w);
};
