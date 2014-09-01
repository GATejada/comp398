#include "stdafx.h"
#include "salaryBase.h"

#include <iostream>
using namespace std;

salaryBase::salaryBase()
{
	SALARY *lead, *follow;
	lead = new SALARY;
	follow = lead->next;
	lead->State = "first";
	lead->next = follow;
	follow->next = NULL;
}


salaryBase::~salaryBase()
{
	SALARY *temp;
	temp = new SALARY;
	temp->next = follow->next;
	while (temp->next != 0)
	{
		delete temp;
		temp = temp->next;
	}
}

void salaryBase::insertBack(SALARY *temp)
{
	temp->next = follow->next;
	follow->next = temp;
}
