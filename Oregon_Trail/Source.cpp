//Denise Valencia
//Dylan Galeazzo
#include "All_Functions.cpp"
using namespace std;

int main()
{
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

	//********************************************************/
	// scores
}
