#pragma once
#include "Kapitan.h"
//#include "Controller.h"

class Port {
		static Port *head;
public:

	Port *next;
	virtual void set(int);
	virtual Port* get(int);
	virtual void add();
	virtual void show();
	virtual int getVodoIsm() { return 0; }
	virtual int getKolMest() { return 0; }
	virtual Kapitan getKap() = 0;
	virtual void print() {};
	void del(int);
	friend class Controller;
};