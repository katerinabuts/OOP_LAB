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
			cout << ob[i].getDestination() << "\t\t\t" << ob[i].getFlightNumber() << "\t\t" << ob[i].getHours() << ":" << ob[i].getMinutes() << "\t" << ob[i].getTypeOfAircraft() << "\t" << ob[i].getWeekdays() << "\n";
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
			cout << ob[i].getDestination() << "\t\t\t" << ob[i].getFlightNumber() << "\t\t" << ob[i].getHours() << ":" << ob[i].getMinutes() << "\t" << ob[i].getTypeOfAircraft() << "\t" << ob[i].getWeekdays() << "\n";
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
			cout << ob[i].getDestination() << "\t\t\t" << ob[i].getFlightNumber() << "\t\t" << ob[i].getHours() << ":" << ob[i].getMinutes() << "\t" << ob[i].getTypeOfAircraft() << "\t" << ob[i].getWeekdays() << "\n";
		}
	}
}

int main()
{
	setlocale(LC_CTYPE,"Russian");
	Airline ob1("Manchester",8765,"Boeing 777",15,5,4),ob2,ob3("Paris", 467, "Boeing 777", 12, 40, 2);
	std::string str;
	int a,c;

	ob2.setDestination("LA");
	ob2.setFlightNumber(1598);
	ob2.setTypeOfAircraft("Boeing 777");
	ob2.setHours(1);
	ob2.setMinutes(10);
	ob2.setWeekdays(7);

	Airline ob[3] = { ob1,ob2,ob3 };

	
		
		do {
			cout << "0-�����\n";
			cout << "1-������ ������ ��� ��������� ������ ����������: \n";
			cout << "2-������ ������ ��� ��������� ��� ������\n";
			cout << "3-������ ������ ��� ��������� ��� ������, ����� ������ ��� ������� ������ ���������\n";
			cin >> c;

			switch (c) {
			case 1: punkt(ob, 3); break;
			case 2: nedelya(ob, 3); break;
			case 3: time(ob, 3); break;
			}
		} while (c!=0);


    return 0;
}

