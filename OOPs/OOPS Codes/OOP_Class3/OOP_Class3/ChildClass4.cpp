#include "ChildClass4.h"

#include <iostream>

using namespace std;

ChildClass4::ChildClass4() {

	nCC4Private = 0;
	nCC4Prot = 0;

	cout << "Inside ChildClass4::Constructor ..." << endl;
}

ChildClass4::ChildClass4(int nIn) : ChildClass2(nIn), ChildClass3(nIn) {

	nCC4Private = nIn;
	nCC4Prot = nIn;
	cout << "Inside ChildClass4::P Constructor ..." << endl;
}

ChildClass4::~ChildClass4() {

	cout << "Inside ChildClass4::Destructor ..." << endl;
}

void ChildClass4::printClassDetails() {

	cout << "Inside ChildClass4::printClassDetails ..." << endl;
}