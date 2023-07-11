#pragma once
#include <string>

using namespace std;

class Employees
{
private:
	int nEmpID;
	string sName;

public:
	Employees(int nID, string sNam);
	Employees();

	~Employees();

	void printDetails();

	string getEmployeeDetails();
};

