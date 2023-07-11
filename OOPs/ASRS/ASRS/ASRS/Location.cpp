#include "Location.h"
#include <iostream>

using namespace std;

Location::Location() {

	xLocation = 0;
	yLocation = 0;

	cout << endl << "Location::Location() with xLoc " << xLocation;
}

Location::Location(int xx, int yy) {

	xLocation = xx;
	yLocation = yy;

	cout << endl << "Location::Location(Param) with xLoc " << xLocation;
}

Location::~Location() {

	cout << endl << "Location::~Location() with xLoc " << xLocation;
}

void Location::printDetails() {

	cout << endl << "Location::printDetails with xLocation " << xLocation;
	cout << endl << "Location::printDetails with yLocation " << yLocation;
}

string Location::getLocationDetails() {

	string returnStr = to_string(xLocation);
	returnStr.append(" / ");
	returnStr.append(to_string(yLocation));
	return returnStr;
}