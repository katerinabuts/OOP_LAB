#include "stdafx.h"
#include <iomanip>
#include <ctime>
#include "Log.h"

namespace Log{


	LOG getlog(wchar_t  logfile[]){
		static std::ofstream log;
		log.open(logfile);
		if (!log.is_open()) throw ERROR_THROW(112);
		LOG logFile;
		wcscpy_s(logFile.logfile, logfile);
		logFile.stream = &log;
		return logFile;
	}

	void writeLine(const LOG &log, char *c, ...){
		char **p = &c;
		char *str = new char[ERROR_MAXSIZE_MESSAGE];

	strcpy_s(str,ERROR_MAXSIZE_MESSAGE, *(p++));
		while (*p != "")
			strcat_s(str,ERROR_MAXSIZE_MESSAGE, *(p++));
		*log.stream << str;
		delete[] str;
	}

	void writeLine(const LOG &log, wchar_t *c, ...){
		wchar_t **p = &c;
		wchar_t *str = new wchar_t[ERROR_MAXSIZE_MESSAGE];
		wcscpy_s(str,ERROR_MAXSIZE_MESSAGE, *(p++));
		while (*p != L"")
			wcscat_s(str,ERROR_MAXSIZE_MESSAGE, *(p++));
		
		size_t sz;
		char *conv = new char[ERROR_MAXSIZE_MESSAGE];
		wcstombs_s((size_t*)&sz,conv,ERROR_MAXSIZE_MESSAGE, str, wcslen(str) + 1);
		*log.stream << conv;
		delete[] conv;
		delete[] str;
	}

	void writeLog(const LOG &log){
		char buffer[80];
		time_t seconds = time(NULL);
		tm* timeinfo = localtime(&seconds);
		char* format = "%d.%d.%Y %H:%M:%S";
		strftime(buffer, 80, format, timeinfo);
		*log.stream
			<< "\n----- Протокол ------ Дата: "
			<< buffer << " --------";
	}

	void writeParm(const LOG &log, const Parm::PARM &parm){
		char inTxt[PARM_MAX_SIZE],
			outTxt[PARM_MAX_SIZE],
			logTxt[PARM_MAX_SIZE];
		wcstombs(inTxt, parm.in, wcslen(parm.in) + 1);
		wcstombs(outTxt, parm.out, wcslen(parm.out) + 1);
		wcstombs(logTxt, parm.log, wcslen(parm.log) + 1);
		*log.stream << "\n----- Параметры --------";
		*log.stream
			<< "\n-in: " << inTxt
			<< "\n-out: " << outTxt
			<< "\n-log: " << logTxt;
	}

	void writeIn(const LOG &log, const In::IN &in){
		*log.stream << "\n---- Исходные данные ------";
		*log.stream
			<< "\nКоличество символов: " << std::setw(3) << in.size
			<< "\nПроигнорировано	   :" << std::setw(3) << in.ignor
			<< "\nКоличество строк   :" << std::setw(3) << in.lines;
	}

	void writeError(const LOG &log, const Error::ERROR &e){
		*log.stream
			<< "\nОшибка " << e.id << ": " << e.message
			<< ", строка "
			<< e.inext.line
			<< ", позиция "
			<< e.inext.col
			<< std::endl << std::endl;
	}
}
