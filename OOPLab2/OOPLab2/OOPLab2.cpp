// OOPLab2.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include "Parusnik.h"
#include "Parohod.h"
#include "Korvet.h"


int main()
{
	setlocale(LC_CTYPE,"Russian");
	Parohod p(1750,"������������","������",30,10,"������","�����");
	Parusnik par("������","������������","�����",35,15, "������","�����");
	Korvet k("���������","�������","������",50,20,"������","��������� �������");
	p.print();
	std::cout << "\n\n\n";
	par.print();
	std::cout << "\n\n\n";
	k.print();

    return 0;
}

