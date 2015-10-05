#pragma once
#include <string>

class Kapitan {
	std::string name;
	int vosrast;
	int stasch;

public:
	Kapitan(std::string, int, int);
	Kapitan();
	void setName(std::string);
	std::string getName();
	void setVosrast(int);
	int getVosrast();
	void setStasch(int);
	int getStasch();
	virtual void print();
};