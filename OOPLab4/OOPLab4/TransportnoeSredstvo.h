#pragma once
#include <string>
#include "AAA.h"

class TransportnoeSredstvo: public AAA {
	std::string vid;
	std::string istochnilEnergii;

public:
	TransportnoeSredstvo() {};
	TransportnoeSredstvo(std::string, std::string);
	void setVid(std::string);
	std::string getVid();
	void setIstochnilEnergii(std::string);
	std::string getIstochnilEnergii();
	virtual void print();
	void add();
};
