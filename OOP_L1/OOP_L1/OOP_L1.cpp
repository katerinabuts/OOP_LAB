// OOP_L1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Airline.h"
#include <iostream>
using namespace std;

void punkt(Airline *ob,int N) {
	std::string str;
	cout << "����� ����������:\t";
	cin >> str;
	cout << "����� ����������:\t";
	cout << "����� ��������:\t";
	cout << "�����:\t";
	cout << "��� ��������:\t";
	cout << "���� ������:\n";
	for (int i = 0; i < N; i++) {
		if (ob[i].getDestination() == str) {
			ob[i].print();
		}
	}
}

void nedelya(Airline *ob, int N) {
	std::string str;
	cout << "���� ������:\n";
	cin >> str;
	cout << "����� ����������:\t";
	cout << "����� ��������:\t";
	cout << "�����:\t";
	cout << "��� ��������:\t";
	cout << "���� ������:\n";
	for (int i = 0; i < N; i++) {
		if (ob[i].getWeekdays() == str) {
			ob[i].print();
		}
	}
}

void time(Airline *ob, int N) {
	std::string str;
	int h, m;
	cout << "���� ������:\n";
	cin >> str;
	cout << "����:\t";
	cin >> h;
	cout << "������:\t";
	cin >> m;
	cout << "����� ����������:\t";
	cout << "����� ��������:\t";
	cout << "�����:\t";
	cout << "��� ��������:\t";
	cout << "���� ������:\n";
	for (int i = 0; i < N; i++) {
		if (ob[i].getWeekdays() == str)
			if (ob[i].getHours()>h || (ob[i].getHours()==h && ob[i].getMinutes()>=m))
		{
			ob[i].print();
		}
	}
}

int main()
{
	setlocale(LC_CTYPE,"Russian");
	Airline ob1("Manchester",8765,1,15,5,4),ob2,ob4(ob1),ob3("Paris", 467,3, 12, 40, 2);
	std::string str;
	int a,c;

	ob2.setDestination("LA");
	ob2.setFlightNumber(1598);
	ob2.setTypeOfAircraft(2);
	ob2.setHours(1);
	ob2.setMinutes(10);
	ob2.setWeekdays(7);
	
	
	Airline ob[4] = { ob1,ob2,ob3,ob4};

	
		
		do {
			cout << "0-�����\n";
			cout << "1-������ ������ ��� ��������� ������ ����������: \n";
			cout << "2-������ ������ ��� ��������� ��� ������\n";
			cout << "3-������ ������ ��� ��������� ��� ������, ����� ������ ��� ������� ������ ���������\n";
			cin >> c;

			switch (c) {
			case 1: punkt(ob, 4); break;
			case 2: nedelya(ob, 4); break;
			case 3: time(ob, 4); break;
			}
		} while (c!=0);


    return 0;
}

