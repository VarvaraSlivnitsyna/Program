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
	cout << "Enter name and number of planet" << endl;
	cin >> bio;
	cout << bio << endl;
	Biosphere l;
	cout << "l=" << endl;
	cout << l << endl;
	l = bio;
	cout << "l=bio" << endl;
	cout << "l=" << endl;
	cout << l << endl;
	l.planetName = "Jupiter";
	l.planetNumber = 5;
	cout << "Now l is Jupiter" << endl;
	cout << l << endl;

	swap(l, bio);
	cout << "swap(l,bio)" << endl;
	cout << "now bio: "<<bio << endl;
	cout <<"now l: "<< l << endl;

	
	
	return 0;
}
#endif

#ifdef TASK_2
int main() {
	//демонстрация работы функций и операторов косного вещества
	Stagnant f;
	f.name = "Ferrum";
	f.volume = 3;
	f.weight = 3;
	f.state = Liquid;
	cout << "f=\n" << f.name << "  " << f.volume << "  " << f.weight << "  " << f.state << endl;

	Stagnant m;
	m.name = "Ferrum";
	m.volume = 1;
	m.weight = 2;
	m.state = Liquid;
	cout << "m=\n" << m.name << "  " << m.volume << "  " << m.weight << "  " << m.state << endl;
	Stagnant a;
	a = f + m;
	cout << "f+m=" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	/*m.state = Solid;
	a = f + m;*/ //не сложатся, так как разное агрегатное состояние
	/*f.name = "Cuprum";
	a = f + m;*/ //не сложатся, так как разные веществва
	a = f;
	cout << "a=f" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	
	a = f - m;
	cout << "f-m=" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	/*m.state = Solid;
	a = f - m;*/ //не вычтутся, так как разное агрегатное состояние
	/*f.name = "Cuprum";
	a = f - m;*/ //не вычтутся, так как разные веществва
	a = m;
	a = m * 3;
	cout << "m*3=" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	a = m / 3;
	cout << "m/3=" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	swap(a, f);
	cout << "swap:" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	cout << f.name << "  " << f.volume << "  " << f.weight << "  " << f.state << endl;
	return 0;
}
#endif


#ifdef TASK_3

int main() {
	//демонстрация работы функций и операторов живого вещества
	Living cat;
	cat.name = "Cat";
	cat.age = 5;
	cat.weight = 7;
	cout << cat.name << "  " << cat.age << "  " << cat.weight << endl;
	Living mouse;
	mouse.name = "Mouse";
	mouse.age = 1;
	mouse.weight = 1;
	cout << mouse.name << "  " << mouse.age << "  " << mouse.weight << endl;

	cat = cat + mouse;
	cout << "mouse + cat=\n"<<cat.name << "  " << cat.weight << endl;
	cat = mouse;
	cout << "cat=mouse\n"<<cat.name << "  " << cat.weight << endl;

	return 0;
}
#endif

#ifdef TASK_4

int main() {
	//демонстрация работы функций и операторов биокосного вещества
	Bioinert f;
	f.name = "Something";
	f.volume = 3;
	f.weight = 3;
	cout << "f=\n"<<f.name << "  " << f.volume << "  " << f.weight << endl;
	Bioinert m;
	m.name = "Something";
	m.volume = 1;
	m.weight = 2;
	cout << "m=\n" << m.name << "  " << m.volume << "  " << m.weight << endl;
	Bioinert a;
	a = f + m;
	cout <<"f+m=\n"<< a.name << "  " << a.volume << "  " << a.weight << endl;
	cout << "a=\n" << a.name << "  " << a.volume << "  " << a.weight << endl;
	/*f.name = "Something else";
	a = f + m;*/ //не сложатся, так как разные веществва
	a = f;
	cout << "a=f\n"<<a.name << "  " << a.volume << "  " << a.weight << endl;
	a = f - m;
	cout <<"f-m=\n"<< a.name << "  " << a.volume << "  " << a.weight << endl;
	
	/*f.name = "Something else";
	a = f - m;*/ //не вычтутся, так как разные веществва
	a = m * 3;
	cout << "m*3=\n"<<a.name << "  " << a.volume << "  " << a.weight << endl;
	a = m / 3;
	cout <<"m/3=\n"<< a.name << "  " << a.volume << "  " << a.weight << endl;
	swap(m, f);
	cout <<"swap(m,f)\n"<<"m=  "<< m.name << "  " << m.volume << "  " << m.weight << endl;
	cout <<"f=  "<< f.name << "  " << f.volume << "  " << f.weight << endl;
	return 0;

}

#endif


#ifdef TASK_5

int main() {

	//демонстрация работы функций и операторов биогенного вещества
	Bioigenic f;
	f.name = "Something";
	f.volume = 3;
	f.weight = 3;
	f.state = Liquid;
	cout <<"f=\n"<< f.name << "  " << f.volume << "  " << f.weight << "  " << f.state << endl;

	Bioigenic m;
	m.name = "Something";
	m.volume = 1;
	m.weight = 2;
	m.state = Liquid;
	cout << "m=\n" << m.name << "  " << m.volume << "  " << m.weight << "  " << m.state << endl;
	Bioigenic a;
	a = f + m;
	cout << "f+m=" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	/*m.state = Solid;
	a = f + m;*/ //не сложатся, так как разное агрегатное состояние
	/*f.name = "Something else";
	a = f + m;*/ //не сложатся, так как разные веществва
	a = f;
	cout << "a=f" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	a = f - m;
	cout << "f-m=" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	/*m.state = Solid;
	a = f - m;*/ //не вычтутся, так как разное агрегатное состояние
	/*f.name = "Something else";
	a = f - m;*/ //не вычтутся, так как разные веществва
	a = m;
	a = m * 3;
	cout << "m*3=" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	a = m / 3;
	cout << "m/3=" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	swap(a, f);
	cout << "swap:" << endl;
	cout << a.name << "  " << a.volume << "  " << a.weight << "  " << a.state << endl;
	cout << f.name << "  " << f.volume << "  " << f.weight << "  " << f.state << endl;
	return 0;
}

#endif

