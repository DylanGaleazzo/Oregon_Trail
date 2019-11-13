//Dylan Galeazzo
#include "Landmark.h"

string LandMark::get_Name()
{
	return name;
}

bool LandMark::isFort()
{

}

Wagon LandMark::get_Wagon()
{
	return wagon;
}

ostream& Fort::operator<<(ostream& os)
{
	cout << this->get_Name() << endl;
	cout << this->get_Wagon().get_Date() << endl;
}

ostream& River::operator<<(ostream& os)
{
	string temp;
	cout << "You are at the " << this->get_Name() << " crossing" << endl;
	cout << this->get_Wagon().get_Date() << endl << endl;
}