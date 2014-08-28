#pragma once
#ifndef SALBASE
#define SALBASE

#include "flatNode.h"



class salaryBase
{
public:
	salaryBase();
	~salaryBase(); 


	
	void insertBack(SALARY* temp);
	void Insert(SALARY* newTemp);
	void Delete(string thisMajor);

private:
	SALARY *lead;
	SALARY *follow;
};

#endif // !SALBASE
