#pragma once
#include <fstream>
#include "In.h"
#include "Error.h"
#include "Parm.h"

namespace Out{
	struct OUT{
		wchar_t outfile[PARM_MAX_SIZE];
		std::ofstream *stream;
	};

	static const OUT INITOUT = { L"", NULL };
	OUT getout(wchar_t outfile[]);
	void ScanText(char *text);
	void WriteRez(const OUT &out, bool rc);
	void Close(OUT &out, bool rc);
}