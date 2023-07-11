#include "ChildClass3.h"
#include <iostream>

using namespace std;

ChildClass3::ChildClass3() {

	nCC3Private = 0;
	nCC3Prot = 0;

	cout << "Inside ChildClass3::Constructor ..." << endl;
}

ChildClass3::ChildClass3(int nIn) {

	nCC3Private = nIn;
	nCC3Prot = nIn;
	cout << "Inside ChildClass3::P Constructor ..." << endl;
}

ChildClass3::~ChildClass3() {

	cout << "Inside ChildClass3::Destructor ..." << endl;
}

void ChildClass3::printClassDetails() {

	cout << "Inside ChildClass3::printClassDetails ..." << endl;
}