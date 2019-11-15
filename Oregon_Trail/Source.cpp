//Denise Valencia
//Dylan Galeazzo
#include "All_Functions.h"
using namespace std;

int main()
{
	string input;
	cout << std::fixed;
	cout << setprecision(2);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	//********************************************************//
	// create Wagon and people
	Wagon wagon(set_occupation());
	//********************************************************/
	// getting first round of supplies
	General_Store store;
	independence_general_store_text(wagon, &store);
	//********************************************************/
	// travel (Array of landmarks couldn't be implemented)

	Landmark landmarkArray[15] = { River((string)" Kansas River", 102, wagon),
		River((string)" Big Blue River", 82, wagon), Fort((string)" Fort Kearney", 118, wagon),
		Other((string)" Chimney Rock", 250,wagon), Fort((string)" Fort Laramie", 86,wagon),
		Other((string)" Independence Rock", 190,wagon), Other((string)" South Pass", 98,wagon),
		River((string)" Green River", 57,wagon), Other((string)" Soda Springs", 143,wagon),
		Fort((string)" Fort Hall", 57,wagon), River((string)" Snake River", 182,wagon), Fort((string)" Fort Boise", 113,wagon),
		Other((string)" Blue Mountains", 160,wagon), Other((string)" The Dalles", 125,wagon),
		Other((string)" Willamete Valley", 100,wagon) };

	for (int i = 0; i < 15 && wagon.peopleAlive != 0; i++)
	{
		cout << wagon.date;
		cout << "You are " << landmarkArray[i].miles << " miles from " << landmarkArray[i].name << endl;
		cout << "Press c to continue onto the trail";
		getline(cin, input, 'c');
		std::system("CLS"); // clear the command window
		travel_troubles((wagon));
		arrived_At_Landmark((wagon), &store, landmarkArray[i]);
		wagon.date.addWeek();
	}
	cout << "Game Over!" << endl;
}