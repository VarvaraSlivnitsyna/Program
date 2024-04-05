using namespace std;
#include<iostream>
#include "Biosphere.h"
#include "Aggregate_state.h"
#include "Stagnant_matter.h"
#include "Living_matter.h"
#include "Bioinert_matter.h"
#include "Biogenic_matter.h"
#define TASK_1
#ifdef TASK_1

int main() 
{
	//демонстрация работы функций и операторов биосферы
	Biosphere bio;
	cin >> bio;
	cout << bio << endl;
	Biosphere l;
	l = bio;
	cout << l << endl;
	l.planetName = "Jupiter";
	l.planetNumber = 5;
	swap(l, bio);
	cout << bio << endl;

	
	
	return 0;
}
#endif




#ifdef TASK_11

int main() {
	//демонстрация работы функций и операторов живого вещества
	Living cat;
	cat.name = "Cat";
	cat.age = 5;
	cat.weight = 7;
	Living mouse;
	mouse.name = "Mouse";
	mouse.age = 1;
	mouse.weight = 1;

	cat = cat + mouse;
	cout << cat.name << "  " << cat.weight << endl;
	cat = mouse;
	cout << cat.name << "  " << cat.weight << endl;

	return 0;
}
#endif


