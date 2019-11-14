#include "Wagon.h"

Wagon::Wagon()
{
    occupation = "Banker";
    money = 16000.00;
    people_alive = 5;
    oxen = 0;
    food = 0;
    clothing = 0;
    ammunition = 0;
    parts = 0;
}

Wagon::Wagon(string occupation)
{

    this->occupation = occupation;

    if (occupation == "Banker")
    {
        money = 16000.00;
    }
    else if (occupation == "Carpenter")
    {
        money = 8000.00;
    }
    else if (occupation == "Farmer")
    {
        money = 4000.00;
    }
    else
    {
        throw occupation + " is invalid";
        occupation = "Banker";
    }

    this->people_alive = 5;
    this->oxen = 0;
    this->food = 0;
    this->clothing = 0;
    this->ammunition = 0;
    this->parts = 0;
    this->rations = 1;

    string temp_name;
    cout << "What is the leader of your wagons name?: ";
    cin >> temp_name;
    this->leader = temp_name;
    this->people[0].set_name(temp_name);

    cout << "Howdy " << temp_name << ", now name your wagon members: \n";
    for (int i = 1; i < people_alive; i++)
    {
        cout << i << ": ";
        cin >> temp_name;
        this->people[i].set_name(temp_name);
        // cout << "\n";
    }
}

Wagon::Wagon(string occupation, double money, int oxen, int food, int clothing, int ammunition, int parts)
{
    this->occupation = occupation;
    this->money = money;
    people_alive = 5;
    this->oxen = oxen;
    this->food = food;
    this->clothing = clothing;
    this->ammunition = ammunition;
    this->parts = parts;
}

Wagon::~Wagon()
{
    cout << "Wagon destroyed" << endl;
}

string Wagon::get_occupation() { return occupation; }
string Wagon::get_leader() { return this->leader; }
Person Wagon::get_person(int index) { return this->people[index]; }
int Wagon::alive_count() { return this->people_alive; }
void Wagon::kill_person(int index)
{
    people[index].~Person();
    people_alive--;
}

ostream &operator<<(ostream &os, const Wagon &w)
{

    os << w.leader << " the " << w.occupation << "'s wagon.\n\n";
    for (int i = 0; i < w.people_alive; i++)
    {
        // TODO: print whether each person has any ailments
        // if (!(w.people[i].status()))
        os << w.people[i] << "\n";
    }

    os << "Resources:"
       << "\nOxen: " << w.oxen << "\nFood: " << w.food << "\nClothing: " << w.clothing << "\nAmmunition: " << w.ammunition << "\nParts: " << w.parts;

    return os;
}
