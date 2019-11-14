//Dylan Galeazzo
#include "Landmark.h"

string LandMark::get_Name()
{
	return name;
}

// bool LandMark::isFort()
// {

// }

Wagon LandMark::get_Wagon()
{
	return wagon;
}

// ostream& Fort::operator<<(ostream& os)
// {
// 	os << this->get_Name() << endl;
// 	// cout << this->get_Wagon(). << endl;
// 	return os;
// }

// ostream& River::operator<<(ostream& os)
// {
// 	string temp;
// 	os << "You are at the " << this->get_Name() << " crossing" << endl;
// 	// cout << this->get_Wagon().get_Date() << endl << endl;
// 	return os;
// }