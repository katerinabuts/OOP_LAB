#pragma once

class AAA {
protected:
	static AAA *head;
public:
	
	AAA *next;
	virtual void add()=0;
	static void show();
	virtual void print()=0;
};