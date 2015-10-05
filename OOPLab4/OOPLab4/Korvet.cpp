#include "stdafx.h"
#include "Korvet.h"

Korvet::Korvet(std::string voorusch,std::string klass,std::string name, int vosrast, int stasch, std::string vid, std::string istochnikEnergii):Korabl(klass,name,vosrast,stasch,vid, istochnikEnergii) {
	vooruschenie = voorusch;
}

void Korvet::setVooruschenie(std::string voor)
{
	vooruschenie = voor;
}

std::string Korvet::getVooruschenie()
{
	return vooruschenie;
}

void Korvet::print()
{
	Korabl::print();
	std::cout << "\tКорвет:\n";
	std::cout << "Вооружение:" << vooruschenie << "\n";
	Korabl::a = 4;
	std::cout << "a= " << a << "\n";
}
