#pragma once
#include "TransportnoeSredstvo.h"
#include "Kapitan.h"

class Korabl: public TransportnoeSredstvo {
	Kapitan Kap;
	std::string klass;
public:
	Korabl() {};
	Korabl(std::string,std::string, int, int,std::string, std::string);
	void setKap(std::string,int,int);
	Kapitan getKap();
	void setKlass(std::string);
	std::string getKlass();
	virtual void print();
protected :
	int a;
};
