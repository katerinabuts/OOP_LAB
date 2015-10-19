#pragma once
#include <fstream>
#include "In.h"
#include "Error.h"
#include "Parm.h"

namespace Log
{
	struct LOG
	{
		wchar_t logfile[PARM_MAX_SIZE];
		std::ofstream *stream;
	};

	static const LOG INITLOG = { L"", NULL };
	LOG getlog(wchar_t logfile[]);
	void writeLine(const LOG &log, char *c, ...);
	void writeLine(const LOG &log, wchar_t *c, ...);
	void writeLog(const LOG &log);
	void writeParm(const LOG &log, const Parm::PARM &parm);
	void writeIn(const LOG &log, const In::IN &in);
	void writeError(const LOG &log, const Error::ERROR &error);
	inline void Close(const LOG &log){ (*log.stream).close(); }
}
