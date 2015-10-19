#pragma once
#define IN_MAX_LEN_TEXT 1024 * 1024	// максимальный размер исходного кода - 1MB
#define IN_CODE_ENDL ';'	// символ конца строки
// таблица проверки входной информации, индекс = код (Windows-1251) символа
// значения IN::F - запрещенный символ, IN::T - разрешенный символ, IN::I -игнорировать (не вводить),
//	если 0 < значение < 256 - то вводится данное значение
#define IN_CODE_TABLE {\
	/*15*/	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*31*/	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*47*/	IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*63*/	IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::T, IN::F, IN::R, IN::F, IN::F, IN::F, IN::F, \
	/*79*/	IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, \
	/*95*/	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::I, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*111*/	IN::F, IN::T, IN::F, IN::F, IN::T, IN::T, IN::T, IN::F, IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::T, IN::T, \
	/*127*/	IN::T, IN::F, IN::T, IN::T, IN::T, IN::T, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, \
	\
	/*143*/	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*159*/	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*175*/	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*191*/	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*207*/	'-', IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, IN::T, IN::F, IN::F, IN::F, IN::F, \
	/*223*/	IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*239*/	IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, \
	/*255*/	IN::F, IN::F, IN::T, IN::T, IN::F, IN::F, IN::T, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::F, IN::T, \
}
namespace In
{
	struct IN	// исходные данные
	{
		enum
		{T = 1024, F = 2048, I = 4096,R=8192}; // T - допустимый символ, F - недопустимый, I - игнорировать, иначе заменить
		int	size;	//	размер исходного кода
		int	lines;	//	количество строк
		int	ignor;	//	количество проигнорированных символов
		unsigned char*	text;	//	исходный код (Windows -	1251)
		int	code[256];	//	таблица проверки: Т, F,	I новое	значение
	};
	IN getin(wchar_t infile[]);	// ввести и проверить входной поток
};
