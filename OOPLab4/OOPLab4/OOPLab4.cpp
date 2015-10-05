// OOPLab4.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "TransportnoeSredstvo.h"
#include "Parohod.h"

int main()
{
	setlocale(LC_CTYPE,"Russian");

	 TransportnoeSredstvo t("a","b"), t1("1","2"), *tt;
	 Parohod par(1234,"a","b",5,4,"a","a");
	 tt = &par;
	t.add();
	t1.add();
	tt->add();
	AAA::show();

    return 0;
}

