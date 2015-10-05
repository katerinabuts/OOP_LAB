#pragma once
#include "Korabl.h"
#include <iostream>

class Korvet : public Korabl {
	std::string vooruschenie;
public:
	Korvet(std::string,std::string,std::string, int, int, std::string, std::string);
	void setVooruschenie(std::string);
	std::string getVooruschenie();
	void print();
};