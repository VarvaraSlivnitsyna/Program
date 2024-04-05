#ifndef STAGNANT_MATTER_H
#define STAGNANT_MATTER_H
using namespace std;
#include<iostream>
#include "Biosphere.h"
#include "Aggregate_state.h"

class Stagnant : public Biosphere 
{
public:
	string name;//у косного вещества есть вес, объем, название и агрегатное состояние
	float volume;
	float weight;
	AState state;
	Stagnant() {
		name = "Ferrum";//по умолчанию у нас есть 0 железа
		volume=0;
		weight=0;
		state=Liquid;
	}
	Stagnant operator = (const Stagnant& b)
	{
		name = b.name;
		volume = b.volume;
		weight = b.weight;
		state = b.state;
		return *this;
	}
	Stagnant operator / (const int& a)//при делении вещества делится лишь его вес и объем
	{
		//name = name;
		volume = volume/a;
		weight = weight/a;
		//state = state;
		return *this;
	}
	Stagnant operator + (const Stagnant& b)//вещества можно сложить только если одинаковые имя и агрегатное состояние
	{
		if (name == b.name && state == b.state) {
			Stagnant a;
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
	Stagnant operator - (const Stagnant& b)//вещества можно вычесть только если одинаковые имя и агрегатное состояние
	{
		if (name == b.name && state == b.state) {
			Stagnant a;
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
	Stagnant operator * (const float& a)//аналогично делению
	{
		volume = volume * a;
		weight = weight * a;
		return *this;
	}
};
void swap(Stagnant& b, Stagnant& e);

#endif
