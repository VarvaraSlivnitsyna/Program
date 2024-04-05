#include "Stagnant_matter.h";

void swap(Stagnant& b, Stagnant& e) {
	Stagnant tmp;
	tmp.name = e.name;
	tmp.volume = e.volume;
	tmp.weight = e.weight;
	tmp.state = e.state;
	e.name = b.name;
	e.volume = b.volume;
	e.weight = b.weight;
	e.state = b.state;
	b.name = tmp.name;
	b.volume = tmp.volume;
	b.weight = tmp.weight;
	b.state = tmp.state;
}