#include "Person.h"

#include <iostream>
using namespace std;

class Wagon
{
private:
    string occupation;
    string leader;
    double money;

    int peopleAlive;
    Person people[5];

    int oxen;
    int food;
    int clothing;
    int ammunition;
    int parts;

public:
    Wagon();
    Wagon(string occupation);
    Wagon(string occupation, double money, int oxen, int food, int clothing, int ammunition, int parts);
    ~Wagon();
    string get_Occupation();
    double get_Money();
    int get_People_Alive();
    int get_Oxen();
    int get_Food();
    int get_Clothing();
    int get_Ammunition();
    int get_Parts();
    void kill_Person();
    void make_people();

    friend ostream &operator<<(ostream &os, const Wagon &w);
};
