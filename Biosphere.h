#ifndef BIOSPHERE_H
#define BIOSPHERE_H
using namespace std;
#include<iostream>
#include <fstream>

class Biosphere {
public:
	int planetNumber;//у биосферы есть номер планеты от звезды и имя
	string planetName;

	Biosphere() {
		planetNumber=3;//по умолчанию планета - Земля
		planetName= "Earth";
	}
	
	Biosphere operator = (const Biosphere& b) //перегрузка оператора =
	{
		planetNumber = b.planetNumber;
		planetName = b.planetName;
		return *this;
	}
	
	void swap(Biosphere& b) {
		int tmp;
		tmp = planetNumber;
		planetNumber = b.planetNumber;
		string tmn;
		tmn = planetName;
		planetName = b.planetName;

	}
	
};
ostream& operator<<(ostream& os, const Biosphere& b);//перегрузка оператора вывода
istream& operator>>(istream& is, Biosphere& b);//перегрузка оператора ввода
#endif 
