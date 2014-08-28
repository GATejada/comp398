#ifndef salaries
#define salaries

#include <string>

using namespace std;

typedef
struct salaryList
{

	short startSalary;
	short midSalary;
	short avgSalary;
	string major;

	struct salaryList *next;

} SALARY;

#endif

