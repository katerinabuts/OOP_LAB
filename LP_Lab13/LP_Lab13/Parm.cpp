#include "stdafx.h"
#include "Error.h"
#include "Parm.h"

namespace Parm
{
	void convert(_TCHAR* argv, wchar_t *str)
	{
		int j = 0;
		for (int k = wcslen(str); k < wcslen(argv); k++, j++)
			argv[j] = argv[k];
		argv[j] = '\0';
	}

	int search(int argc, _TCHAR* argv[], wchar_t *str)
	{
		for (int i = 1; i < argc; i++)
		if (wcsstr(argv[i], str) != 0)
		{
			if (wcslen(argv[i]) > PARM_MAX_SIZE)
				throw ERROR_THROW(104);
			convert(argv[i], str);
			return i;
		}
		return false;
	}

	PARM Parm::getparm(int argc, _TCHAR* argv[])
	{
		int index = 0;
		if (!(index = Parm::search(argc, argv, PARM_IN))) throw ERROR_THROW(100);
		Parm::PARM params;
		wcscpy_s(params.in, argv[index]);
		if (!(index = Parm::search(argc, argv, PARM_OUT)))
		{
			wcscpy_s(params.out, params.in);
			wcscat_s(params.out, PARM_OUT_DEFAULT_EXT);
		}
		else wcscpy_s(params.out, argv[index]);
		if (!(index = Parm::search(argc, argv, PARM_LOG)))
		{
			wcscpy_s(params.log, params.in);
			wcscat_s(params.log, PARM_LOG_DEFAULT_EXT);
		}
		else wcscpy_s(params.log, argv[index]);
		return params;
	}
}
