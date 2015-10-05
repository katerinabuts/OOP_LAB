#pragma once
#include "Korabl.h"
#include <iostream>


class Parohod : public Korabl {
	int year;
public:
	Parohod(int,std::string,std::string, int, int, std::string, std::string);
	void setYear(int);
	int getYear();
	void print();
};
