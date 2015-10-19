// OOPlab6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Vector.h"


int main()
{
	Vector v, v3(5,2), v1,v2;

	int y,u,N,a;
	do {
		std::cout << "1-Vector 1\n";
		std::cout << "2-Vector 2\n";
		std::cout << "3-Vector 1 + vector 2\n";
		std::cout << "4-Vector 1 < Vector 2\n";
		std::cout << "5-Vector 1 > Vector 2\n";
		std::cin >> y;
		switch (y) {
		case 1: {
			std::cout << "1-Sozdat vector\n";
			std::cout << "2-Dobavit znachenie\n";
			std::cout << "3-Print";
			std::cout << "4-Delete (index)\n";
			std::cin >> u;
			switch (u) {
			case 1: {
				std::cout << "N=\t"; std::cin >> N;
				for (int i(0);i < N;i++) {
					std::cout << "=\t"; std::cin >> a;
					v1.push(a);
				}
			}break;
			case 2: {
				std::cout << "=\t"; std::cin >> a;
				v1.push(a);
			}break;
			case 3: v1.show();break;
			case 4: {
				std::cout << "index=\t"; std::cin >> a;
				v1.del(a);
			}break;
			}
		}break;
		case 2: {
			std::cout << "1-Sozdat vector\n";
			std::cout << "2-Dobavit znachenie\n";
			std::cout << "3-Print";
			std::cout << "4-Delete (index)\n";
			std::cin >> u;
			switch (u) {
			case 1: {
				std::cout << "N=\t"; std::cin >> N;
				for (int i(0);i < N;i++) {
					std::cout << "=\t"; std::cin >> a;
					v2.push(a);
				}
			}break;
			case 2: {
				std::cout << "=\t"; std::cin >> a;
				v2.push(a);
			}break;
			case 3: v2.show();break;
			case 4: {
				std::cout << "index=\t"; std::cin >> a;
				v2.del(a);
			}break;
			}
		}break;
		case 3: {
			v = v1 + v2;
			v.show();
		}break;
		case 4: {
			if (v1 < v2)
				std::cout << "true\n";
			else
				std::cout << "false\n";
		}break;
		case 5: {
			if (v1 > v2)
				std::cout << "true\n";
			else
				std::cout << "false\n";
		}break;
		}
	} while (y != 0);

    return 0;
}

