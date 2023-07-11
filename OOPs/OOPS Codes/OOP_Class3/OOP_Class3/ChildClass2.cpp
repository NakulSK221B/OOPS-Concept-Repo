#include "ChildClass2.h"
#include <iostream>

using namespace std;

ChildClass2::ChildClass2() {

	nCC2Private = 0;
	nCC2Prot = 0;

	cout << "Inside ChildClass2::Constructor ..." << endl;
}

ChildClass2::ChildClass2(int nIn) : ChildClass1 (nIn) {

	nCC2Private = nIn;
	nCC2Prot = nIn;
	cout << "Inside ChildClass2::P Constructor ..." << endl;
}

ChildClass2::~ChildClass2() {

	cout << "Inside ChildClass2::Destructor ..." << endl;
}

void ChildClass2::printClassDetails() {

	cout << "Inside ChildClass2::printClassDetails ..." << endl;
}