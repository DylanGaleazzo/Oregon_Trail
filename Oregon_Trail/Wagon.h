#include "Person.h"
#include "Date.h"
#include <iostream>
using namespace std;

class Wagon
{
private:
    string occupation;
    string leader;

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
    Wagon(string occupation);
    Wagon(string occupation, double money, int oxen, int food, int clothing, int ammunition, int parts);
    ~Wagon();
    string get_occupation();
    string get_leader();
    Person get_person(int index);
    int alive_count();
    void kill_person(int index);

    friend ostream &
    operator<<(ostream &os, const Wagon &w);
};
