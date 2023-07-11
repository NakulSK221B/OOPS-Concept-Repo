#include "Employees.h"
#include <iostream>

Employees::Employees() {

	nEmpID = 99999;
	sName = "NoName";

	cout << endl << "Employees::Employees() with ID " << nEmpID;
}

Employees::Employees(int nID, string sNam) {

	nEmpID = nID;
	sName = sNam;

	cout << endl << "Employees::Employees(Param) with ID " << nEmpID;
}

Employees::~Employees() {

	cout << endl << "Employees::~Employees() with ID " << nEmpID;
}

void Employees::printDetails() {

	cout << endl << "Employees::printDetails with ID   " << nEmpID;
	cout << endl << "Employees::printDetails with Name " << sName;
}

string Employees::getEmployeeDetails() {

	return sName;
}