#pragma once
#include "Korabl.h"
#include <iostream>


class Parusnik : public Korabl {
	std::string type;
public:
	Parusnik(std::string,std::string, std::string, int, int, std::string, std::string);
	void setType(std::string);
	std::string getType();
	void print();
};
