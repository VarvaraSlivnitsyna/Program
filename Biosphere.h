#ifndef BIOSPHERE_H
#define BIOSPHERE_H
using namespace std;
#include<iostream>
#include <fstream>

class Biosphere {
public:
	int planetNumber;//� �������� ���� ����� ������� �� ������ � ���
	string planetName;

	Biosphere() {
		planetNumber=3;//�� ��������� ������� - �����
		planetName= "Earth";
	}
	
	Biosphere operator = (const Biosphere& b) //���������� ��������� =
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
ostream& operator<<(ostream& os, const Biosphere& b);//���������� ��������� ������
istream& operator>>(istream& is, Biosphere& b);//���������� ��������� �����
#endif 
