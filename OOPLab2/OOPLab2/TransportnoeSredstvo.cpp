#include "stdafx.h"
#include "TransportnoeSredstvo.h"
#include <iostream>

TransportnoeSredstvo::TransportnoeSredstvo(std::string v, std::string iE)
{
	vid = v;
	istochnilEnergii = iE;
}

void TransportnoeSredstvo::setVid(std::string str){ vid = str; }
std::string TransportnoeSredstvo::getVid() { return vid; }
void TransportnoeSredstvo::setIstochnilEnergii(std::string str) { istochnilEnergii = str; }
std::string TransportnoeSredstvo::getIstochnilEnergii() { return istochnilEnergii; }

void TransportnoeSredstvo::print()
{
	std::cout << "Вид транспортного средства:\t"<<getVid()<<"\n";
	std::cout << "Источник энергии:\t" << getIstochnilEnergii()<<"\n";
}
