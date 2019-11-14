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
	cout << wagon;
	//********************************************************/
	// getting first round of supplies
	General_Store store;
	independence_general_store_text(&wagon, &store);
	//********************************************************/
	// travel

	Landmark landmarkArray[15] = {River((string)"Kansas", 102, wagon),
		River((string)"Big Blue", 82, wagon), Fort((string)"Kearney", 118, wagon),
		Other((string)"Chimney Rock", 250, wagon), Fort((string)"Laramie", 86, wagon),
		Other((string)"Independence Rock", 190, wagon), Other((string)"South Pass", 98, wagon),
		River((string)"Green", 57, wagon), Other((string)"Soda Springs", 143, wagon),
		Fort((string)"Hall", 57, wagon), River((string)"Snake", 182, wagon), Fort((string)"Boise", 113, wagon),
		Other((string)"Blue Mountains", 160, wagon), Other((string)"The Dalles", 125, wagon),
		Other((string)"Willamete Valley", 100, wagon)};
	
	bool isDead = false;
	for (int i=0; i < 15 && !isDead; i++) {

		cout << wagon.date;
		cout << "You are " << landmarkArray[i].miles << " miles from " << landmarkArray[i].name ;
		cout << "Press c to continue onto the trail";
		getline(cin, input, 'c');
		std::system("CLS"); // clear the command window
		travel_troubles(wagon);
		arrived_At_Landmark(&wagon, &store, &landmarkArray[i]);
		wagon.date.addWeek();
	}
}
