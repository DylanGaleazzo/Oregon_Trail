#include "Wagon.h"

Wagon::Wagon()
{
    occupation = "Banker";
    money = 1600.00;
    peopleAlive = 5;
    oxen = 0;
    food = 0;
    clothing = 0;
    ammunition = 0;
}

Wagon::Wagon(string occupation)
{

    this->occupation = occupation;

    if (occupation == "Banker")
    {
        money = 1600.00;
    }
    else if (occupation == "Carpenter")
    {
        money = 800.00;
    }
    else if (occupation == "Farmer")
    {
        money = 400.00;
    }
    else
    {
        throw occupation + " is invalid";
        occupation = "Banker";
    }

    this->peopleAlive = 5;
    this->oxen = 0;
    this->food = 0;
    this->clothing = 0;
    this->ammunition = 0;
    this->rations = 1;

    string temp_name;
    cout << "What is the leader of your wagons name?: ";
    cin >> temp_name;
    this->leader = temp_name;
    this->people[0].set_Name(temp_name);

    cout << "Howdy " << temp_name << ", now name your wagon members: \n";
    for (int i = 1; i < peopleAlive; i++)
    {
        cout << i << ": ";
        cin >> temp_name;
        this->people[i].set_Name(temp_name);
        // cout << "\n";
    }
}

Wagon::~Wagon()
{

}

string Wagon::get_Occupation() { return occupation; }
string Wagon::get_Leader() { return leader; }
Person Wagon::get_Person(int index) { return people[index-1]; }
int Wagon::alive_Count() { return peopleAlive; }
void Wagon::kill_Person(int index)
{
    this->people[index].~Person();

	for (int i = index; i < peopleAlive; i++)
	{
		this->people[i - 1] = people[i];
	}

    this->peopleAlive--;

}

ostream &operator<<(ostream &os, const Wagon &w)
{

    os << w.leader << " the " << w.occupation << "'s wagon.\n\n";
    for (int i = 0; i < w.peopleAlive; i++)
    {
        os << w.people[i] << "\n";
    }

    os << "Resources:"
       << "\nMoney: " << w.money << "\nOxen: " << w.oxen << "\nFood: " << w.food << "\nClothing: " << w.clothing << "\nAmmunition: " << w.ammunition;

    return os;
}
