#pragma once
#include "Date.h"
#include "Person.h"
#include <iostream>
#pragma once
using namespace std;

class Wagon {
private:
  string occupation;
  string leader;

    int peopleAlive;
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
  ~Wagon();
  string get_Occupation();
  string get_Leader();
  Person get_Person(int index);
  int alive_Count();
  void kill_Person(int index);
  friend ostream &operator<<(ostream &os, const Wagon &w);
};
