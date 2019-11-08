#include "Extra_Functions.h"

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//********************************************************//
	// create wagon

	string occupation;

	occupation = set_occupation();

	if (occupation == "Banker")
	{
		Wagon wagon(occupation, 1600, 0, 0, 0, 0, 0);
	}
	else if (occupation == "Carpenter")
	{
		Wagon wagon(occupation, 800, 0, 0, 0, 0, 0);
	}
	else if (occupation == "Farmer")
	{
		Wagon wagon(occupation, 400, 0, 0, 0, 0, 0);
	}

	//********************************************************//
	// create leader and people

	string memberName;
	People group[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "What is the full name of member " << i + 1 << "? ";
		getline(cin, memberName);
		group[i].set_Name(memberName);
	}
	//********************************************************/
	// 

}