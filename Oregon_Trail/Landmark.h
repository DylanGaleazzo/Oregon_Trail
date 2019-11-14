//Dylan Galeazzo
#include "Wagon.h"

class Landmark
{
public:
	Wagon wagon;
	std::string name;
	int miles;
	virtual int isFort() = 0;
};

class Fort:public Landmark
{
public:
	Fort(string name, int miles, Wagon wagon);
	std::ostream& operator<<(std::ostream& os);
	int is_Fort() { return 1; }
};

class River:public Landmark
{
public:
	River(string name, int miles, Wagon wagon);
	std::ostream& operator<<(std::ostream& os);
	int is_Fort() { return 2; }
};

class Other :public Landmark
{
public:
	Other(string name, int miles, Wagon wagon);
	std::ostream& operator<<(std::ostream& os);
	int is_Fort() { return 3; }
};
