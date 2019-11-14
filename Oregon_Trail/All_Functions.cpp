//Denise Valencia
//Dylan Galeazzo

#include <fstream>
#include <stdlib.h>  // For clearing the command window
#include <vector>	// For ailment vector
#include <Windows.h> // For colored lines
#include <iomanip>   // std::setprecision
#include "Wagon.h"
#include "Person.h"
#include "Landmark.h"
#include "General_Store.h"

void read_text(string fileName)
{
	string line;
	ifstream fin;
	fin.open(fileName, ios::out); // Open document for output only

	while (!fin.eof()) // Read the lines until it reaches the end of the file
	{
		getline(fin, line);   // load text to line
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
		read_text("Selecting_Occupation.txt");
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
			read_text("Difference_In_Occupations.txt");
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

void travel_troubles(People *person, Wagon *wagon) // randomly throw an ailment
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int randNum;
	vector<string> ailment({"inadequite grass", "bad water", "exhaustion", " measles", "a snakebite", "dysentery", "typhoid", "cholera", "a broken leg", "a broken arm"});
	randNum = generate_random(0, wagon.rations * 300);

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
		wagon->kill_Person(generate_random(1, wagon.alive_count()));
	}
}

int randomly_choose_person(Wagon *wagon)
{
	int numOfPeople = wagon->alive_count();
	if (numOfPeople > 1)
	{
		int rand = generate_random(2, numOfPeople);
		return rand;
	}
	else
	{
		return 1;
	}
}

void independence_general_store_text(Wagon *wagon, General_Store *store)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	string cont;
	cout << "It is 1848. Your jumping off" << endl
		 << "place for Oregon is Independence," << endl
		 << "Missouri.You are leaving in" << endl
		 << "April because there will be" << endl
		 << "green grass for your oxen to" << endl
		 << "eat and the weather will still" << endl
		 << "be cool." << endl
		 << "Press c to continue" << endl;
	getline(cin, cont, 'c');
	std::system("CLS"); // clear the command window

	cout << "Before leaving Independence you" << endl
		 << "should buy equipment and" << endl
		 << "supplies.You have $" << wagon.money << " in" << endl
		 << "cash, but you don't have to" << endl
		 << "spend it all now. " << endl
		 << endl
		 << "You can buy whatever you need at" << endl
		 << "Dylan's General Store." << endl
		 << "Press c to continue" << endl;

	getline(cin, cont, 'c');
	std::system("CLS"); // clear the command window

	SetConsoleTextAttribute(hConsole, 10); // Green text
	read_text("Dylan_Talking.txt");
	SetConsoleTextAttribute(hConsole, 15); // White text

	double moneyTotalOxen = 0.00;
	double moneyTotalFood = 0.00;
	double moneyTotalClothing = 0.00;
	double moneyTotalAmmunition = 0.00;
	double moneyTotalSpent = moneyTotalOxen + moneyTotalFood + moneyTotalClothing + moneyTotalAmmunition;
	int selection;
	double numOfItemsWanted;
	bool loop = true;
	// loop until they want to stop
	do
	{
		cout << "***********************************" << endl
			 << "Dylan's General Store" << endl
			 << "***********************************" << endl
			 << "1. Oxen                 $" << moneyTotalOxen << endl
			 << "2. Food                 $" << moneyTotalFood << endl
			 << "3. Clothing             $" << moneyTotalClothing << endl
			 << "4. Ammunition           $" << moneyTotalAmmunition << endl
			 << "***********************************" << endl
			 << endl
			 << "Amount of money you have: " << wagon.money - moneyTotalSpent << endl
			 << "Select 5 to exit the store" << endl
			 << "What would you like to buy? ";
		cin >> selection;
		switch (selection)
		{
		case 1:
			std::system("CLS"); // clear the command window
			read_text("Oxen.txt");
			cin >> numOfItemsWanted;
			if (store->get_Price_Oxen() * numOfItemsWanted + moneyTotalSpent <= wagon.money)
			{
				wagon.oxen(numOfItemsWanted * 2);
				moneyTotalOxen = numOfItemsWanted * store->get_Price_Oxen();
			}
			break;
		case 2:
			std::system("CLS"); // clear the command window
			read_text("Food.txt");
			cin >> numOfItemsWanted;
			if (numOfItemsWanted * store->get_Price_Food() + moneyTotalSpent <= wagon.money)
			{
				wagon.food += numOfItemsWanted;
				moneyTotalFood = numOfItemsWanted * store->get_Price_Food();
			}
			break;
		case 3:
			std::system("CLS"); // clear the command window
			read_text("Clothing.txt");
			cin >> numOfItemsWanted;
			if (numOfItemsWanted * store->get_Price_Clothing() + moneyTotalSpent <= wagon.money)
			{
				wagon.clothing += numOfItemsWanted;
				moneyTotalClothing = numOfItemsWanted * store->get_Price_Clothing();
			}
			break;
		case 4:
			std::system("CLS"); // clear the command window
			read_text("Ammunition.txt");
			cin >> numOfItemsWanted;
			if (numOfItemsWanted * store->get_Price_Ammunition() + moneyTotalSpent <= wagon.money)
			{
				wagon.ammunition += (numOfItemsWanted * 20);
				moneyTotalAmmunition = numOfItemsWanted * store->get_Price_Ammunition();
			}
			break;
		default:
			loop = false;
			std::system("CLS"); // clear the command window
		}
		moneyTotalSpent = moneyTotalOxen + moneyTotalFood + moneyTotalClothing + moneyTotalAmmunition;
	} while (loop);

	wagon.money -= moneyTotalSpent;

	cout << "Well then, you're ready" << endl
		 << "to start. Good luck!" << endl
		 << "You have a long and" << endl
		 << "difficult journey ahead" << endl
		 << "of you." << endl
		 << "Press c to continue";
	getline(cin, cont, 'c');
}

void general_store(Wagon *wagon, General_Store *store)
{
	bool loop = true;
	int choice;
	int numOfItemsWanted;

	do
	{
		std::system("CLS"); // clear the command window
		read_text("Dylans_Store.txt");
		cout << "You have $" << wagon.money - store->get_Total() << " to spend." << endl
			 << "What would you like to do? ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			std::system("CLS"); // clear the command window
			read_text("Dylans_Store.txt");
			cout << "You have $" << wagon.money << " to spend." << endl
				 << "How many yoke would you like to buy? ";
			cin >> numOfItemsWanted;
			if (store->get_Price_Oxen() * numOfItemsWanted <= wagon.money)
			{
				wagon.oxen(numOfItemsWanted * 2);
				wagon.money -= (numOfItemsWanted * store->get_Price_Oxen());
			}
			break;
		case 2:
			std::system("CLS"); // clear the command window
			read_text("Dylans_Store.txt");
			cout << "You have $" << wagon.money << " to spend." << endl
				 << "How many pounds of food would you like to buy? ";
			cin >> numOfItemsWanted;
			if (numOfItemsWanted * store->get_Price_Food() <= wagon.money)
			{
				wagon.food += (numOfItemsWanted);
				wagon.money -= (numOfItemsWanted * store->get_Price_Food());
			}
			break;
		case 3:
			std::system("CLS"); // clear the command window
			read_text("Dylans_Store.txt");
			cout << "You have $" << wagon.money << " to spend." << endl
				 << "How many sets of clothing would you like to buy? ";
			cin >> numOfItemsWanted;
			if (numOfItemsWanted * store->get_Price_Clothing() <= wagon.money)
			{
				wagon.clothing += (numOfItemsWanted);
				wagon.money -= (numOfItemsWanted * store->get_Price_Clothing());
			}
			break;
		case 4:
			std::system("CLS"); // clear the command window
			read_text("Dylans_Store.txt");
			cout << "You have $" << wagon.money << " to spend." << endl
				 << "How many boxes would you like to buy? ";
			cin >> numOfItemsWanted;
			if (numOfItemsWanted * store->get_Price_Ammunition() <= wagon.money)
			{
				wagon.ammunition += (numOfItemsWanted * 20);
				wagon.money -= (numOfItemsWanted * store->get_Price_Ammunition());
			}
			break;
		default:
			loop = false;
			std::system("CLS"); // clear the command window
		}
	} while (loop);
}

void hunting(Wagon *wagon)
{
	string shot;
	int foodCaught;
	string cont;
	std::system("CLS"); // clear the command window
	cout << "To hunt, type bang as fast as possible in hope of catching game." << endl;
	cin >> shot;
	wagon.ammunition--;
	if (shot == "bang")
	{
		foodCaught = generate_random(0, 100);
		wagon.food += (foodCaught);
		cout << " You caught " << foodCaught << " pounds of food." << endl
			 << "Press c to continue";
		getline(cin, cont, 'c');
	}
	else
	{
		cout << " Oh no!! You missed!!" << endl
			 << "Press c to continue";
		getline(cin, cont, 'c');
	}
	std::system("CLS"); // clear the command window
}

void change_Food_Rations(Wagon *wagon)
{
	int choice;

	std::system("CLS"); // clear the command window
	read_text("Change_Food_Rations.txt");
	wagon.rations = choice;
	std::system("CLS"); // clear the command window
}

void arrived_At_Fort_Or_River(LandMark *landmark)
{
	string temp;
	if (landmark->isFort())
	{
		cout << landmark;
		cout << "You may: " << endl
			 << "	1. Continue on trail" << endl
			 << "	2. Check supplies" << endl
			 << "	3. Go hunting" << endl
			 << "	4. Change food rations" << endl
			 << "	5. Buy Supplies" << endl
			 << endl
			 << "What is your choice ? ";
	}
	else
	{
		cout << landmark;
		cout << "You may: " << endl
			 << endl
			 <<

			"1. attempt to ford the river (50 % chance no goods lost)" << endl
			 << endl
			 <<

			"2. caulk the wagon and float it across(75 % chance no goods lost)" << endl
			 << endl
			 <<

			"3. take a ferry across(100 %)" << endl
			 << endl
			 <<

			"What is your choice? ";
		std::system("CLS"); // clear the command window

		cout << "You must cross the river in"
			 << "order to continue. The river"
			 << "at this point is currently"
			 << "628 feet across, and 4.8"
			 << "feet deep in the middle." << endl
			 << endl
			 << "Press c to continue" << endl;
		getline(cin, temp, 'c');
		std::system("CLS"); // clear the command window
	}
}
