#include "stdafx.h"
#include "Kapitan.h"
#include <iostream>

Kapitan::Kapitan(std::string n, int v, int s)
{
	name = n;
	vosrast = v;
	stasch = s;
}
Kapitan::Kapitan()
{
	name = "";
	vosrast = 0;
	stasch = 0;
}
void Kapitan::setName(std::string str) { name = str; }
std::string Kapitan::getName() { return name; }
void Kapitan::setVosrast(int vos) { vosrast=vos; }
int Kapitan::getVosrast() { return vosrast; }
void Kapitan::setStasch(int st) { stasch = st; }
int Kapitan::getStasch() { return stasch; }

void Kapitan::print()
{
	std::cout << "Капитан:\n";
	std::cout << "Имя:\t" << getName() << "\n";
	std::cout << "Стаж:\t" << getStasch() << "\n";
	std::cout << "Возраст:\t" << getVosrast() << "\n";
}
