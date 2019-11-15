#pragma once
#include "Date.h"
#include "Person.h"
#include <iostream>

using namespace std;

class Wagon 
{
private:
	string occupation;
	string leader;
    Person people[5];
public:
	int peopleAlive;
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
  ~Wagon();
  string get_Occupation();
  string get_Leader();
  Person get_Person(int index);
  int alive_Count();
  void kill_Person(int index);
  friend ostream &operator<<(ostream &os, const Wagon &w);
};
