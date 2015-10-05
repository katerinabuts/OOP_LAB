#include "stdafx.h"
#include "AAA.h"
AAA * AAA::head = NULL;

void AAA::show()
{
	AAA *p = head;
	while (p)
	{
		p->print();
		p = p->next;
	}
}
