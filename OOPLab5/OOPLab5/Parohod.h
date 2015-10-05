#pragma once
#include "Korabl.h"
#include <iostream>


class Parohod : public Korabl {
	int kolMest;
public:
	Parohod() {};
	Parohod(int,std::string,std::string, int, int, std::string, std::string);
	void setKolMest(int);
	int getKolMest();
	void print();
};