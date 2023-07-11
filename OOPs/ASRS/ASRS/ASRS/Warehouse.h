#include <string>
#include "Rack.h"

using namespace std;

class Warehouse
{
private:
	int nID;
	string sName;
	Rack rk;

public:
	Warehouse();
	Warehouse(int id, string name, Rack &r);

	~Warehouse();

	void printDetails();
};

