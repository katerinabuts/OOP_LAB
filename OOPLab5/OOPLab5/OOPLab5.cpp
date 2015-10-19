// OOPLab5.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Controller.h"
#include "Parusnik.h"
#include "Parohod.h"
#include "Korabl.h"
int main()
{
	setlocale(LC_CTYPE, "Russian");

	Port *a=NULL;

	Parusnik prs(123, "a", "asda","das", 4, 5, "a", "ad");
	Parusnik prs1(47, "2222222", "2222222", "2222222",4, 5, "222222", "222222");

	Korabl kt("3333333333333333","44444444444",34,56,"4444444444444","666");

	Parohod pr(123,"a","1",4,5,"a","ad");
	Parohod pr1(1, "a", "asda",  40, 5, "a", "ad");

	a = &pr; a->add();
	a = &pr1; a->add();

	a = &prs; a->add();
	a = &prs1;// a->add();

	a = &kt;a->add();

	Controller cntl(a);
	std::cout << "1-Poik srednego kol mest\n";
	std::cout << "2-Poik srednego vodo ism\n";
	std::cout << "3-Molosche 35\n";
	std::cout << "4-Show\n";
	std::cout << "5-Delete\n";
	std::cout << "6- Set N\n";
	std::cout << "7-Get N\n";
	int i,n;
	do {
		std::cin >> i;
		switch (i) {
		case 1: cntl.poiskSrednegoKolMest(); break;
		case 2: cntl.poiskSrednegoVodoIsm(); break;
		case 3: cntl.Kapp(); break;
		case 4: a->show(); break;
		case 5:
			std::cout << "Number= \t"; std::cin >> n;
			a->del(n);
			break;
		case 6:
			std::cout << "N=\t"; std::cin >> n;
			a->set(n);
			break;
		case 7:
			std::cout << "N=\t"; std::cin >> n;
			(a->get(n))->print();
			break;
		}
	} while (i != 0);

    return 0;
}

