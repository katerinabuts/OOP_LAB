#pragma once
#include "Korabl.h"
#include <iostream>


class Parusnik : public Korabl {
	std::string type;
	int vodoIsm;
public:
	Parusnik() {};
	Parusnik(int,std::string,std::string, std::string, int, int, std::string, std::string);
	void setType(std::string);
	std::string getType();
	void setVodoIsm(int);
	int getVodoIsm();
	void print();
};
