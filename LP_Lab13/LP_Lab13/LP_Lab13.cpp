// LP_Lab13.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <fstream>
#include<iostream>
#include <locale>
#include <cwchar>
#include<string>
#include<stdio.h>
#include "Error.h"
#include "Parm.h"
#include "Log.h"
#include "In.h"
#include"Out.h"
#include"GP.h"

#include "FST.h"
#define Graph 23, \
	
namespace GP
{
	
	bool GP(char *p)
	{
		
	FST::FST fst1(p, 23,FST::NODE(1, FST::RELATION('s', 1)), \
	FST::NODE(1, FST::RELATION('t', 2)), \
	FST::NODE(1, FST::RELATION('a', 3)), \
	FST::NODE(1, FST::RELATION('r', 4)), \
	FST::NODE(1, FST::RELATION('t', 5)), \
	FST::NODE(1, FST::RELATION(' ', 6)), \
	FST::NODE(5, FST::RELATION(' ', 6), FST::RELATION('s', 7), FST::RELATION('w', 10), FST::RELATION('s', 13), FST::RELATION(' ',18)), \
	FST::NODE(1, FST::RELATION('e', 8)), \
	FST::NODE(1, FST::RELATION('n', 9)), \
	FST::NODE(1, FST::RELATION('d', 16)), \
	FST::NODE(1, FST::RELATION('a', 11)), \
	FST::NODE(1, FST::RELATION('i', 12)), \
	FST::NODE(1, FST::RELATION('t', 16)), \
	FST::NODE(1, FST::RELATION('h', 14)), \
	FST::NODE(1, FST::RELATION('o', 15)), \
	FST::NODE(1, FST::RELATION('w', 16)), \
	FST::NODE(1, FST::RELATION(' ', 17)), \
	FST::NODE(5, FST::RELATION(' ', 17), FST::RELATION('s', 7), FST::RELATION('w', 10), FST::RELATION('s', 13), FST::RELATION(' ', 18)), \
	FST::NODE(2, FST::RELATION(' ', 18), FST::RELATION('s', 19)), \
	FST::NODE(1, FST::RELATION('t', 20)), \
	FST::NODE(1, FST::RELATION('o', 21)), \
	FST::NODE(1, FST::RELATION('p', 22)), \
	FST::NODE());
	return FST::execute(fst1);
	}}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	/*std::cout << "---- тест Error::geterror ----" << std::endl << std::endl;
	try { throw ERROR_THROW(100); }
	catch (Error::ERROR e)
	{
		std::cout << "Ошибка " << e.id << ":" << e.message << std::endl << std::endl;
	};
	std::cout << "---- тест Error::geterrorin ----" << std::endl << std::endl;
	try{ throw ERROR_THROW_IN(111, 7, 7); }
	catch (Error::ERROR e)
	{
		std::cout << "Ошибка " << e.id << ": " << e.message << ", строка " << e.inext.line << ", позиция " << e.inext.col << std::endl << std::endl;
	};
	std::cout << "---- тест Parm::getparm ----" << std::endl << std::endl;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		std::wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << std::endl << std::endl;
	}
	catch (Error::ERROR e)
	{
		std::cout << "Ошибка " << e.id << ": " << e.message << std::endl << std::endl;
	}
	std::cout << "---- тест In::getin ----" << std::endl << std::endl;
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		In::IN in = In::getin(parm.in);
		std::cout << in.text << std::endl;
		std::cout << "Всего символов: " << in.size << std::endl;
		std::cout << "Всего строк: " << in.lines << std::endl;
		std::cout << "Пропущено: " << in.ignor << std::endl;
	}
	catch (Error::ERROR e)
	{
		std::cout << "Ошибка " << e.id << ": " << e.message << std::endl;
		std::cout << "строка " << e.inext.line << " позиция " << e.inext.col << std::endl << std::endl;
	}*/
	Log::LOG log = Log::INITLOG;

	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		log = Log::getlog(parm.log);
		Log::writeLine(log, L"Тест:", L"без ошибок ", L"");
		Log::writeLog(log);
		Log::writeParm(log, parm);
		In::IN in = In::getin(parm.in);
		Log::writeIn(log, in);
		Log::Close(log);
	}
	catch (Error::ERROR e)
	{
		if (log.stream == 0)
		{
			std::cout
				<< "Ошибка " << e.id << ": " << e.message
				<< std::endl;
		}
		else Log::writeError(log, e);
	}


	/*char s[255], s2[255];
	int i=0;
	FILE *fin=fopen ("in.txt","rt");
	FILE *fin2=fopen ("out.txt","wt");
	while(!feof(fin)){
	fgets(s,254,fin);
	//std::cout<<s<<"\n";
	for (int i=0; i<255;i++)
	{
		if (s[i]!=';')
			s2[i]=s[i];
		else s2[i]='\0';
	}
	FST::FST fst(s2, Graph);
	if (FST::execute(fst))
		{fprintf(fin2,"%s","Цепочка:   '");
		fprintf(fin2,"%s",fst.string);
		fprintf(fin2,"%s","' распознана\n");
		std::cout << "Цепочка:   '" << fst.string << "' распознана" << std::endl;
	}
	else 
		std::cout << "Цепочка:   '" << fst.string << "' не распознана" << std::endl;
	{
		fprintf(fin2,"%s","Цепочка:   '");
		fprintf(fin2,"%s",fst.string);
		fprintf(fin2,"%s","' не распознана'\n");
	}
	i++;
	}*/








/*
	/////////////1////////////////
	FST::FST fst("hiuhhuh", Graph);
	if (FST::execute(fst))
		std::cout << "Цепочка:   '" << fst.string << "' распознана" << std::endl;
	else std::cout << "Цепочка:   '" << fst.string << "' не распознана" << std::endl;

	/////////// 2 ///////////

	FST::FST fst_2("start send  stop", Graph);
	if (FST::execute(fst_2))
		std::cout << "Цепочка 2: '" << fst_2.string << "' распознана" << std::endl;
	else std::cout << "Цепочка 2: '" << fst_2.string << "' не распознана" << std::endl;
	
	/////////// 3 ///////////
	FST::FST fst_3("start  stop", Graph);
	if (FST::execute(fst_3))
		std::cout << "Цепочка 3: '" << fst_3.string << "' распознана" << std::endl;
	else std::cout << "Цепочка 3: '" << fst_3.string << "' не распознана" << std::endl;

	/////////// 4 ///////////
	FST::FST fst_4("start send    stop", Graph);
	if (FST::execute(fst_4))
		std::cout << "Цепочка 4: '" << fst_4.string << "' распознана" << std::endl;
	else std::cout << "Цепочка 4: '" << fst_4.string << "' не распознана" << std::endl;

	/////////// 5 ///////////
	FST::FST fst_5("start send wait  stop", Graph);
	if (FST::execute(fst_5))
		std::cout << "Цепочка 5: '" << fst_5.string << "' распознана" << std::endl;
	else std::cout << "Цепочка 5: '" << fst_5.string << "' не распознана" << std::endl;

	/////////// 6 ///////////
	FST::FST fst_6("start send wait   stop", Graph);
	if (FST::execute(fst_6))
		std::cout << "Цепочка 6: '" << fst_6.string << "' распознана" << std::endl;
	else std::cout << "Цепочка 6: '" << fst_6.string << "' не распознана" << std::endl;

	/////////// 7 ///////////
	FST::FST fst_7("start   stp", Graph);
	if (FST::execute(fst))
		std::cout << "Цепочка 7: '" << fst_7.string << "' распознана" << std::endl;
	else std::cout << "Цепочка 7: '" << fst_7.string << "' не распознана" << std::endl;

	/////////// 8 ///////////
	FST::FST fst_8("startstop", Graph);
	if (FST::execute(fst_8))
		std::cout << "Цепочка 8: '" << fst_8.string << "' распознана" << std::endl;
	else std::cout << "Цепочка 8: '" << fst_8.string << "' не распознана" << std::endl;

	/////////// 9 ///////////
	FST::FST fst_9("start sen stop", Graph);
	if (FST::execute(fst_9))
		std::cout << "Цепочка 9: '" << fst_9.string << "' распознана" << std::endl;
	else std::cout << "Цепочка 9: '" << fst_9.string << "' не распознана" << std::endl;*/
	system("pause");
	return 0;
}

