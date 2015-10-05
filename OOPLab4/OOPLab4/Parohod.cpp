#include "stdafx.h"
#include "Parohod.h"

Parohod::Parohod(int y,std::string klass,std::string name, int vosrast, int stasch, std::string vid, std::string istochnikEnergii) :Korabl(klass,name, vosrast, stasch, vid, istochnikEnergii)
{
	year = y;
}

void Parohod::setYear(int y)
{
	year = y;
}

int Parohod::getYear()
{
	return year;
}

void Parohod::print()
{
	Korabl::print();
	std::cout << "\tПароход:\n";
	std::cout << "Год строительства: " << year << "\n";
}
