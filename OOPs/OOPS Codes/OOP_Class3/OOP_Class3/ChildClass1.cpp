#include "ChildClass1.h"
#include <iostream>

using namespace std;


ChildClass1::ChildClass1() {

	nCC1Private = 0;
	nCC1Prot = 0;

	cout << "Inside ChildClass1::Constructor ..." << endl;
}

ChildClass1::ChildClass1(int nIn) : 
	BaseClass (nIn) {

	nCC1Private = nIn;
	nCC1Prot = nIn;
	cout << "Inside ChildClass1::P Constructor ..." << endl;
}

ChildClass1::~ChildClass1() {

	cout << "Inside ChildClass1::Destructor ..." << endl;
}

void ChildClass1::printClassDetails() {

	cout << "Inside ChildClass1::printClassDetails ..." << endl;
}

void ChildClass1::PrintDetails() {
	cout << "Inside ChildClass1::PrintDetails ..." << endl;
}