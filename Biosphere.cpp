#include "Biosphere.h"
using namespace std;
#include<iostream>
#include <fstream>


ostream& operator << (ostream& os, const Biosphere& b)
{
	os << "\nBiosphere belongs with planet " << b.planetName << "\nThe distance from the star is " << b.planetNumber << " planets\n";
	return os;
}
istream& operator>>(istream& is, Biosphere& b)
{
	is >> b.planetName >> b.planetNumber;
	return is;
}
