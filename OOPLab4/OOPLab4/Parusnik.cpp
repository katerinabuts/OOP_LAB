#include "stdafx.h"
#include "Parusnik.h"

Parusnik::Parusnik(std::string t,std::string klass,std::string name, int vosrast, int stasch, std::string vid, std::string istochnikEnergii) :Korabl(klass, name, vosrast, stasch, vid, istochnikEnergii) {
	type = t;
}

void Parusnik::setType(std::string t)
{
	type = t;
}

std::string Parusnik::getType()
{
	return type;
}

void Parusnik::print()
{
	Korabl::print();
	std::cout << "\tПарусник:\n";
	std::cout << "Тип: " << type << "\n";
}
