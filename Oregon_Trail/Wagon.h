#include "Person.h"

#include <iostream>
using namespace std;

class Wagon
{
private:
    string occupation;
    string leader;
    double money;

    int people_alive;
    Person people[5];

    int oxen;
    int food;
    int clothing;
    int ammunition;
    int parts;
    int rations;

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
    void add_Clothing(int);
    void lose_money(int);
    void add_oxen(int);
    void lose_Ammunition(int);
    void change_Rations(int);

    friend ostream &operator<<(ostream &os, const Wagon &w);
};
