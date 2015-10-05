#include "stdafx.h"
#include "TransportnoeSredstvo.h"
#include <iostream>
TransportnoeSredstvo::TransportnoeSredstvo(std::string v, std::string iE)
{
	vid = v;
	istochnilEnergii = iE;
}

void TransportnoeSredstvo::setVid(std::string str) { vid = str; }
std::string TransportnoeSredstvo::getVid() { return vid; }
void TransportnoeSredstvo::setIstochnilEnergii(std::string str) { istochnilEnergii = str; }
std::string TransportnoeSredstvo::getIstochnilEnergii() { return istochnilEnergii; }

void TransportnoeSredstvo::print()
{
	std::cout << "Вид транспортного средства:\t"<<getVid()<<"\n";
	std::cout << "Источник энергии:\t" << getIstochnilEnergii()<<"\n";
}


void TransportnoeSredstvo::add()
{
	if (!head) {
		head = this;
		this->next = NULL;
	}
	else
	{
		AAA *p = head;
		if (p->next == NULL)
		{
			p->next = this;
			this->next = NULL;
		}
		else {
			while (p->next != NULL)
				p = p->next;
		}
		p->next = this;
		this->next = NULL;
	}
}