#pragma once
#include <string>
#include "Location.h"

using namespace std;

class Rack
{
private:
	int nWidth;
	int nHeight;
	int nDepth;

	Location *locList[5];
	int currentLocation;

public:
	Rack(int width, int height, int depth);
	Rack();

	~Rack();

	void AddStorageLocation(Location &loc);

	void printDetails();
};

