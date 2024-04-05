#ifndef LIVING_MATTER_H
#define LIVING_MATTER_H
using namespace std;
#include<iostream>
#include "Biosphere.h"

class Living : public Biosphere
{
public:
	string name;
	int age;
	float weight;
	Living() {
		name = "Cat";
		age = 0;
		weight = 0;
	}
	Living operator = (const Living& b)
	{
		name = b.name;
		age = b.age;
		weight = b.weight;
		return *this;
	}
	
	Living operator + (const Living& b)//��� �������� ����������� ���: ������� �� ����� ����� �������� "�������" �������(��, � ������ ��� ������ ����� ������ ����, � ��������� - ������)
	{
		if (weight >= b.weight) {
			Living a;
			a.name = name;
			a.age = age;
			a.weight = weight + b.weight;
			return a;
		}
		else {
			Living a;
			a.name = b.name;
			a.age = b.age;
			a.weight = weight + b.weight;
			return a;
		}
	}

};


#endif

