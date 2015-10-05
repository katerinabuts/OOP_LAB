#include "stdafx.h"
#include "Korabl.h"
#include "TransportnoeSredstvo.h"
#include <iostream>

Korabl::Korabl(std::string kl,std::string name, int vosrast, int stasch,std::string vid, std::string istochnikEnergii):TransportnoeSredstvo(vid,istochnikEnergii)
 {
	klass = kl;
	Kap.setName(name);
	Kap.setStasch(stasch);
	Kap.setVosrast(vosrast);
}

void Korabl::setKap(std::string name, int vosrast, int stasch)
{
	Kapitan::Kapitan(name, vosrast, stasch);
}

Kapitan Korabl::getKap()
{
	return Kapitan();
}

void Korabl::setKlass(std::string kl)
{
	klass = kl;
}

std::string Korabl::getKlass()
{
	return klass;
}

void Korabl::print()
{
	TransportnoeSredstvo::print();
	std::cout << "Корабль:\t" <<"\n";
	Kap.print();
	std::cout << "Класс корабля:\t" << getKlass() << "\n";
}
