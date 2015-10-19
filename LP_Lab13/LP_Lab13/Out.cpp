#include "stdafx.h"
#include "Out.h"
#include "GP.h"
#include "Error.h"

namespace Out
{
	OUT getout(wchar_t  outfile[])
	{
		static std::ofstream out;
		OUT g;
		out.open(outfile);
		if (!out.is_open())			throw ERROR_THROW(113);
		wcscpy_s(g.outfile, outfile);
		g.stream = &out;
		return g;
	}
	void ScanText(char *text)
	{
		bool rc;
		int b = 0;
		char *a = new char[IN_MAX_LEN_TEXT];
		char *next_token1 = NULL;
		a = strtok_s(text, "\n", &next_token1);
		while (a)
		{
			rc = GP::GP(a);
			if (!rc)	throw ERROR_THROW_IN(105, b, -1);
			a = strtok_s(NULL, "\n", &next_token1);
			b++;
		}
	}
	void WriteRez(const OUT &out, bool rc)
	{
		char *rez = new char[IN_MAX_LEN_TEXT];
		if (rc)
			rez = "Распознана";
		else
			rez = "Нераспознана";
		*out.stream << rez;
	}
	void Close(OUT &out,bool rc)
	{
		WriteRez(out, rc);
		(*out.stream).close();
	}
}