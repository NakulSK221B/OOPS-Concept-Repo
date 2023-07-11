#include "Hardware.h"
#include <iostream>

using namespace std;

Hardware::Hardware() {

	cout << endl << "Hardware::Hardware() ...";
}

Hardware::~Hardware() {

	cout << endl << "Hardware::~Hardware() ...";
}

void Hardware::printDetails() {

	cout << endl << "Hardware::printDetails ...";
}

string Hardware::getHarwareDetails() {
	return "ASRS";
}
