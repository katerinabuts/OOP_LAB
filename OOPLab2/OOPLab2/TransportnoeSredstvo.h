#pragma once
#include <string>

class TransportnoeSredstvo {
	std::string vid;
	std::string istochnilEnergii;

public:
	TransportnoeSredstvo(std::string, std::string);
	void setVid(std::string);
	std::string getVid();
	void setIstochnilEnergii(std::string);
	std::string getIstochnilEnergii();
	virtual void print();
};
