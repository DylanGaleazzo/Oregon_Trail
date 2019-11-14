#pragma once
#include <iostream>
#include <string>
using namespace std;

struct ailment
{
    string name;
    int deathChance;
};

class Person
{
protected:
    string name;
    bool is_alive;
    bool ailment;
    string ailments[5];

public:
    Person();
    Person(string);
    ~Person();
    string get_name();
    void set_name(string);
    bool get_Alive_Status();
    bool status();

    friend ostream &operator<<(ostream &os, const Person &p);
};
