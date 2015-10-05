#pragma once
#include "Port.h"

class Controller {
	Port *s;
public :
	//Controller() {};
	Controller(Port *a) { s = a; };
	void poiskSrednegoVodoIsm();
	void poiskSrednegoKolMest();
	void Kapp();
};