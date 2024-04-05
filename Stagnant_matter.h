#ifndef STAGNANT_MATTER_H
#define STAGNANT_MATTER_H
using namespace std;
#include<iostream>
#include "Biosphere.h"
#include "Aggregate_state.h"

class Stagnant : public Biosphere 
{
public:
	string name;//� ������� �������� ���� ���, �����, �������� � ���������� ���������
	float volume;
	float weight;
	AState state;
	Stagnant() {
		name = "Ferrum";//�� ��������� � ��� ���� 0 ������
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
	Stagnant operator / (const int& a)//��� ������� �������� ������� ���� ��� ��� � �����
	{
		//name = name;
		volume = volume/a;
		weight = weight/a;
		//state = state;
		return *this;
	}
	Stagnant operator + (const Stagnant& b)//�������� ����� ������� ������ ���� ���������� ��� � ���������� ���������
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
	Stagnant operator - (const Stagnant& b)//�������� ����� ������� ������ ���� ���������� ��� � ���������� ���������
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
	Stagnant operator * (const float& a)//���������� �������
	{
		volume = volume * a;
		weight = weight * a;
		return *this;
	}
};
void swap(Stagnant& b, Stagnant& e);

#endif
