// 398 hw_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "salaryBase.h"

#include <assert.h>
#include <fstream>
ifstream FIN;
ofstream fout;


using namespace std;

SALARY *create(void);
SALARY *create(string newMajor);
SALARY *create(short newStartSal);
SALARY *create(short newMidSal);
SALARY *create(short newAvgSal);

int _tmain(int argc, _TCHAR* argv[])
{
	string newMajor, newStartSal, newMidSal, newAvgSal;
	newMajor = "Major";
	newStartSal = "Starting Salary";
	newMidSal = "Mid-Career Salary";
	newAvgSal = "Avg. Salary";

	const char TAB = '\t';
	string fileName, fullPath;

	cout << "Enter filename to open: ";
	cin >> fileName;
	string outfileName = fileName + ".csv";
	fout.open(outfileName.c_str());
	assert(fout.is_open());

	fullPath = "flatDatabase/" + fileName; // concat folder and filename
	FIN.open(fullPath.c_str()); // open requires old-style C string

	if (FIN.is_open())
	{
		string oneLine;

		cout << newMajor << TAB << newStartSal << TAB << newMidSal << TAB << newAvgSal << endl;
		getline(FIN, oneLine); // read one line from FIN stream
		while (FIN)
		{
			cout << oneLine << endl;
			getline(FIN, oneLine);
		}

		FIN.close();


	}
	else
		cout << "NASTY MESSAGE : " << fullPath << " didn't open!" << endl;

		
			return 0;
}


SALARY *create(string newMajor, short newBegSal, short newCenSal, short newMedSal)
{
	SALARY *temp;
	temp = new SALARY;
	temp->major = newMajor;
	temp->startSalary = newBegSal;
	temp->midSalary = newCenSal;
	temp->avgSalary = newMedSal;
	temp->next = 0;
	return temp;


}
