#include "Operator.h"
#include <iostream>

using namespace std;

Operator::Operator() {

	nMachID = 9999;
	cout << endl << "Operator::Operator() with Machine ID " << nMachID;
}

Operator::Operator(int nID, string sNam, int nMacID) : Employees (nID, sNam) {

	nMachID = nMacID;
	cout << endl << "Operator::Operator(Param) with Machine ID " << nMachID;
}

Operator::~Operator(){

	cout << endl << "Operator::~Operator() with Machine ID " << nMachID;
}

void Operator::printDetails() {

	Employees::printDetails();
	cout << endl << "Operator::printDetails with Machine ID " << nMachID;
}

string Operator::getOperatorDetails() {

	return getEmployeeDetails();
}
