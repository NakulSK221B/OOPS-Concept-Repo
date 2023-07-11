#pragma once
#include <string>

using namespace std;

class Location
{
private:
	int xLocation;
	int yLocation;
	//int nWidth;
	//int nHeight;
	//int nDepth;

public:
	Location();
	Location(int xx, int yy);

	~Location();

	void printDetails();

	string getLocationDetails();
};

