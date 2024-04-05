#ifndef BIOGENIC_MATTER_H
#define BIOGENIC_MATTER_H
using namespace std;
#include<iostream>
#include "Biosphere.h"
#include "Aggregate_state.h"

class Bioigenic : public Biosphere
{
public:
	string name;
	float volume;
	float weight;
	AState state;
	Bioigenic() {
		name = "Goal";
		volume = 0;
		weight = 0;
		state = Solid;
	}
	Bioigenic operator = (const Bioigenic& b)
	{
		name = b.name;
		volume = b.volume;
		weight = b.weight;
		state = b.state;
		return *this;
	}
	Bioigenic operator / (const int& a)
	{
		volume = volume / a;
		weight = weight / a;
		return *this;
	}
	Bioigenic operator + (const Bioigenic& b)
	{
		if (name == b.name && state == b.state) {
			Bioigenic a;
			a.name = name;
			a.volume = volume + b.volume;
			a.weight = weight + b.weight;
			a.state = state;
			return a;
		}
		else {
			cout << "\nIt is impossible to fold!" << endl;
		}
	}
	Bioigenic operator - (const Bioigenic& b)
	{
		if (name == b.name && state == b.state) {
			Bioigenic a;
			a.name = b.name;
			a.volume = volume - b.volume;
			a.weight = weight - b.weight;
			a.state = b.state;
			return a;
		}
		else {
			cout << "\nIt is impossible to subtract!" << endl;
		}
	}
	Bioigenic operator * (const float& a)
	{
		volume = volume * a;
		weight = weight * a;
		return *this;
	}

	void swap(Bioigenic& b) {
		Bioigenic tmp;
		tmp.name = name;
		tmp.volume = volume;
		tmp.weight = weight;
		tmp.state = state;
		name = b.name;
		volume = b.volume;
		weight = b.weight;
		state = b.state;
		b.name = tmp.name;
		b.volume = tmp.volume;
		b.weight = tmp.weight;
		b.state = tmp.state;
	}

};


#endif
