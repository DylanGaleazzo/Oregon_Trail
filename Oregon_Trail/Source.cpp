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

	Fort* kearney;
	kearney = new Fort(" Kearney",119,wagon);
	Fort landmarkArray[15] = {Fort((string)"Kansas", 102, wagon),
		Fort((string)"Big Blue", 82, wagon), Fort((string)"Kearney", 118, wagon),
		Fort((string)"Chimney Rock", 250, wagon), Fort((string)"Laramie", 86, wagon),
		Fort((string)"Independence Rock", 190, wagon), Fort((string)"South Pass", 98, wagon),
		Fort((string)"Green", 57, wagon), Fort((string)"Soda Springs", 143, wagon),
		Fort((string)"Hall", 57, wagon), Fort((string)"Snake", 182, wagon), Fort((string)"Boise", 113, wagon),
		Fort((string)"Blue Mountains", 160, wagon), Fort((string)"The Dalles", 125, wagon),
		Fort((string)"Willamete Valley", 100, wagon)};

	for (int i = 0; i < 15; i++)
	{
		cout << wagon.date;
		cout << "You are " << landmarkArray[i].miles << " miles from " << landmarkArray[i].name << endl;
		cout << "Press c to continue onto the trail";
		getline(cin, input, 'c');
		std::system("CLS"); // clear the command window
		travel_troubles((wagon));
		arrived_At_Landmark((wagon), &store, &landmarkArray[i]);
		wagon.date.addWeek();
	}
}
