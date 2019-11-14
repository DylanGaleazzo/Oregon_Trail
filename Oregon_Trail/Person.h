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
private:
    string name;
    bool isAlive;
    bool ailment;
    string ailments[5];

public:
    Person();
    Person(string);
    string get_Name();
    void set_Name(string);
    bool get_Alive_Status();
    bool status();

    friend ostream &operator<<(ostream &os, const Person &p);
};
