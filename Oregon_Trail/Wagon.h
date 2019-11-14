#pragma once
#include "Date.h"
#include "Person.h"
#include <iostream>
using namespace std;

class Wagon {
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
  Wagon(std::string occupation);
  Wagon(string occupation);
  ~Wagon();
  string get_Occupation();
  string get_Leader();
  Person get_Person(int index);
  int alive_Count();
  void kill_Person(int index);
  Wagon(string occupation);
  Wagon(string occupation, double money, int oxen, int food, int clothing,
        int ammunition, int parts);
  ~Wagon();
  string get_occupation();
  string get_leader();
  Person get_person(int index);
  int alive_count();
  void kill_person(int index);

  friend ostream &operator<<(ostream &os, const Wagon &w);
};
