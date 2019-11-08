#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h> // For clearing the command window
#include <vector> // For ailment vector
#include <Windows.h> // For colored lines
#include "Wagon.h"
#include "People.h"

using namespace std;

void read_text(string fileName)
{
	string line;
	ifstream fin;
	fin.open(fileName, ios::out); // Open document for output only
	while (!fin.eof()) // Read the lines until it reaches the end of the file
	{
		getline(fin, line); // load text to line
		cout << line << endl; // print line to screen
	}
	fin.close(); // Close document being read
}

string set_occupation(void)
{
	int choice;
	char cont;
	bool loop;
	string occ;

	do
	{
		read_text("SelectingOccupation.txt");

		cin >> choice;

		std::system("CLS"); // clear the command window

		switch (choice)
		{
		case 1:
			occ = "Banker";
			loop = false;
			break;
		case 2:
			occ = "Carpenter";
			loop = false;
			break;
		case 3:
			occ = "Farmer";
			loop = false;
			break;
		case 4:
			read_text("DifferenceInOccupations.txt");
			cin >> cont;
		default:
			loop = true;
		};

		std::system("CLS"); // clear the command window
	} while (loop);

	return occ;
}

int generate_random(int min, int max)
{
	return min + rand() % ((max + 1) - min);
}

void travel_troubles(People* person, Wagon* wagon) // randomly throw an ailment
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int randNum;
	vector<string>  ailment({ "inadequite grass", "bad water", "exhaustion", " measles", "a snakebite", "dysentery", "typhoid", "cholera",  "a broken leg", "a broken arm" });
	randNum = generate_random(0, 1000);
	if (randNum <= 100)
	{
		int rand = generate_random(0, 9);
		if (rand == 1)
		{
			SetConsoleTextAttribute(hConsole, 10); // Green text
			cout << ailment[rand];
			SetConsoleTextAttribute(hConsole, 15); // White text
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 14); // Yellow text
			cout << person->get_Name() << " is suffering of " << ailment[rand];
			SetConsoleTextAttribute(hConsole, 15); // White text
		}
	}
	else if (randNum == 666)
	{
		// death of person 
		int rand = generate_random(1, 9);
		SetConsoleTextAttribute(hConsole, 12); // Red text
		cout << person->get_Name() << " has died of " << ailment[rand];
		SetConsoleTextAttribute(hConsole, 15); // White text
		wagon->kill_Person();
	}
}