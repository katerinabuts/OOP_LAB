#include "stdafx.h"
#include <fstream>
#include<iostream>
#include "In.h"
#include "Error.h"
#include "FST.h"
#include<string>

namespace In
{
	IN getin(wchar_t infile[])
	{
		std::ifstream file(infile);
		if (!file.is_open()) throw ERROR_THROW(110);
		In::IN in1;
		in1.text = new unsigned char[IN_MAX_LEN_TEXT];
		in1.size = 0;
		in1.lines = 0;
		in1.ignor = 0;
		int col = 0;
		int checked[] = IN_CODE_TABLE;

		while (true)
		{
			unsigned char tmp = file.get();
			//if (file.eof()) {in1.lines--;break;}
			if (checked[tmp] == IN::F) throw ERROR_THROW_IN(111, in1.lines, col);
			if (checked[tmp] == IN::T) 
			{ 
				col++; in1.text[in1.size++] = tmp; 
			}
			else if (checked[tmp] != IN::I) 
			{ 
				col++; in1.text[in1.size++] = checked[tmp]; 
			}
			if (checked[tmp] == IN::I) 
			{ 
				in1.ignor++; col++; 
			}
			if (tmp == IN_CODE_ENDL) 
			{ 
				in1.lines++; col = 0; 
			}if (file.eof()) {in1.lines--;break;}
		}
		in1.text[in1.size] = '\0';
		in1.lines++;
		return in1;
	}
}
