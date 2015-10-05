// OOPLab2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Parusnik.h"
#include "Parohod.h"
#include "Korvet.h"


int main()
{
	setlocale(LC_CTYPE,"Russian");
	Parohod p(1750,"пассажирский","Михаил",30,10,"водный","уголь");
	Parusnik par("Фрегат","пассажирский","Ольга",35,15, "водный","ветер");
	Korvet k("Артилерия","военный","Максим",50,20,"водный","дизельное топливо");
	p.print();
	std::cout << "\n\n\n";
	par.print();
	std::cout << "\n\n\n";
	k.print();

    return 0;
}

