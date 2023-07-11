#include "Rack.h"
#include <iostream>

using namespace std;

Rack::Rack() {

	nWidth = 0;
	nHeight = 0;
	nDepth = 0;

	currentLocation = 0;

	cout << endl << "Rack::Rack() ...";
}

Rack::Rack(int width, int height, int depth) {

	nWidth = width;
	nHeight = height;
	nDepth = depth;

	currentLocation = 0;

	cout << endl << "Rack::Rack(Param)  ...";
}

Rack::~Rack() {

	cout << endl << "Rack::~Rack()  ...";
}

void Rack::printDetails() {

	cout << endl << "Rack::printDetails with width  " << nWidth;
	cout << endl << "Rack::printDetails with height " << nHeight;
	cout << endl << "Rack::printDetails with depth  " << nDepth;
}

void Rack::AddStorageLocation(Location &loc) {
	locList[currentLocation] = &loc;
	currentLocation++;
	cout << endl << "Rack::AddStorageLocation ... current location size is " << currentLocation;
}