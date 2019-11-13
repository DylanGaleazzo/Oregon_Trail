#include "All_Functions.cpp"
using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//********************************************************//
	// create wagon

	string occupation;

	occupation = set_occupation();
	double wagonMoney = 0;
	if (occupation == "Banker")
	{
		wagonMoney = 1600;
	}
	else if (occupation == "Carpenter")
	{
		wagonMoney = 800;
	}
	else if (occupation == "Farmer")
	{
		wagonMoney = 400;
	}

	Wagon wagon(occupation, wagonMoney, 0, 0, 0, 0, 0);


	//********************************************************//
	// create leader and people

	string memberName;
	People group[5];
	cin.ignore();	//Clears the cin buffer
	cout << "What is the full name of the leader? ";
	getline(cin, memberName);
	group[0].set_Name(memberName);
	for (int i = 1; i < 5; i++)
	{
		cout << "What is the first name of member " << i + 1 << " in your party? ";
		getline(cin, memberName);
		group[i].set_Name(memberName);
	}
	//********************************************************/
	// 

}
