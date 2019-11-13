#include "Person.h"

Person::Person()
{
    string names_list[10] = {"Jase", "Si", "Willie", "Korie", "Kay", "Phil", "Jep", "Missy", "Justin", "John"};
    this->name = names_list[rand() % 10];
    this->isAlive = true;
    this->ailment = false;
}
Person::Person(string name)
{
    this->name = name;
    this->isAlive = true;
}

Person::~Person()
{
    cout << name << " has died." << endl;
}

inline string Person::get_name()
{
    return this->name;
}

void Person::set_name(string name)
{
    this->name = name;
}

// inline bool Person::get_Alive_Status()
// {
//     return this->isAlive;
// }

// inline string *Person::get_Ailments()
// {
// 	return this->ailments;
// }

ostream &operator<<(ostream &os, const Person &p)
{
    return os << p.name;
}

string Person::status()
{
    string stat;
    if ()
    {
        /* code */
    }

    stat <<
}