#include "BaseClass.h"
#include <iostream>

using namespace std;

BaseClass::BaseClass() {

	nBCPrivate = 0;
	nBCProt = 0;
	cout << "Inside BaseClass::Constructor ..." << endl;
}

BaseClass::BaseClass(int iIn) {

	nBCPrivate = iIn;
	nBCProt = iIn;
	cout << "Inside BaseClass::P Constructor ..." << endl;
}

BaseClass::~BaseClass() {

	cout << "Inside BaseClass::Destructor ..." << endl;
}

void BaseClass::printClassDetails() {

	cout << "Inside BaseClass::printClassDetails ..." << endl;
}

void BaseClass::PrintDetails() {
	cout << "Inside BaseClass::PrintDetails ..." << endl;
}