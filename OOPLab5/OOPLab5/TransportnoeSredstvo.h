#pragma once
#include <string>
#include "Port.h"

class TransportnoeSredstvo: public Port {
	std::string vid;
	std::string istochnilEnergii;

public:
	TransportnoeSredstvo() {};
	TransportnoeSredstvo(std::string, std::string);
	void setVid(std::string);
	std::string getVid();
	void setIstochnilEnergii(std::string);
	std::string getIstochnilEnergii();
	//virtual Kapitan getKap() = 0;
	void print();
};
