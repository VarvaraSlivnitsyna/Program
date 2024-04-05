#ifndef BIOINERT_MATTER_H
#define BIOINERT_MATTER_H
using namespace std;
#include<iostream>
#include "Biosphere.h"

class Bioinert : public Biosphere
{
public:
	string name;
	float volume;
	float weight;
	Bioinert() {
		name = "Goal";
		volume = 0;
		weight = 0;
	}
	Bioinert operator = (const Bioinert& b)
	{
		name = b.name;
		volume = b.volume;
		weight = b.weight;
		return *this;
	}
	Bioinert operator / (const int& a)
	{
		//name = name;
		volume = volume / a;
		weight = weight / a;
		return *this;
	}
	Bioinert operator + (const Bioinert& b)
	{
		if (name == b.name) {
			Bioinert a;
			a.name = name;
			a.volume = volume + b.volume;
			a.weight = weight + b.weight;
			return a;
		}
		else {
			cout << "\nIt is impossible to fold!" << endl;
		}
	}
	Bioinert operator - (const Bioinert& b)
	{
		if (name == b.name) {
			Bioinert a;
			a.name = b.name;
			a.volume = volume - b.volume;
			a.weight = weight - b.weight;
			return a;
		}
		else {
			cout << "\nIt is impossible to subtract!" << endl;
		}
	}
	Bioinert operator * (const float& a)
	{
		volume = volume * a;
		weight = weight * a;
		return *this;
	}

	void swap(Bioinert& b) {
		Bioinert tmp;
		tmp.name = name;
		tmp.volume = volume;
		tmp.weight = weight;
		name = b.name;
		volume = b.volume;
		weight = b.weight;
		b.name = tmp.name;
		b.volume = tmp.volume;
		b.weight = tmp.weight;
	}

};


#endif
