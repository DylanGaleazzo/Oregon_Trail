//Denise Valencia
//Dylan Galeazzo
#include "All_Functions.cpp"
using namespace std;

int main()
{
	cout << std::fixed;
	cout << setprecision(2);
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

	Wagon wagon(occupation, wagonMoney, 0, 0, 0, 0);
	General_Store store();

	//********************************************************//
	// create Wagon and people
	Wagon wagon(set_occupation());
	cout << wagon;
	//********************************************************/
	// getting firsst rround of supplies
	independence_general_store_text(&wagon, &store);
}
