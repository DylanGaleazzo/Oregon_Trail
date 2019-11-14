//Denise Valencia
//Dylan Galeazzo
#include "All_Functions.cpp"
using namespace std;

int main()
{
	string input;
	std::cout << std::fixed;
	std::cout << setprecision(2);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	//********************************************************//
	// create Wagon and people
	Wagon wagon(set_occupation());
	std::cout << wagon;
	//********************************************************/
	// getting first round of supplies
	General_Store store();
	independence_general_store_text(&wagon, &store);
	//********************************************************/
	// travel

	Landmark landmarkArray[15] = {River Kansas("Kansas", 102, &wagon),
		River Big("Big Blue", 82, &wagon), Fort Kearney("Kearney", 118, &wagon), 
		Landmark Chimney("Chimney Rock", 250, &wagon), Fort Laramie("Laramie", 86, &wagon), 
		Landmark Independence("Independence Rock", 190, &wagon), Landmark South("South Pass", 98, &wagon),
		River Green("Green", 57, &wagon), Landmark Soda("Soda Springs", 143, &wagon), 
		Fort Hall("Hall", 57, &wagon), River Snake("Snake", 182, &wagon), Fort Boise("Boise", 113, &wagon),
		Landmark Blue("Blue Mountains", 160, &wagon), Landmark Dalles("The Dalles", 125, &wagon), 
		Landmark Willamete("Willamete Valley", 100, &wagon)};
	
	for (int i=0; i < 15; i++) {

		cout << "You are " << landmarkArray[i].miles << " miles from " << landmarkArray[i].name ;
		cout << "Press c to continue onto the trail";
		getline(cin, input, 'c');
		std::system("CLS"); // clear the command window


	}

}
