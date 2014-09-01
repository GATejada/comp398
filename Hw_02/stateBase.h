#pragma once
#ifndef SALBASE
#define SALBASE

#include "flatNode.h"



class salaryBase
{
public:
	salaryBase(); //CONSTCR
	~salaryBase(); //DESTRCR


	
	void insertBack(SALARY* temp);//Inserts at end of list
	
	void Delete(SALARY* Temp); //Deletes at the end.

private:
	SALARY *lead;
	SALARY *follow;
};

#endif // !SALBASE


