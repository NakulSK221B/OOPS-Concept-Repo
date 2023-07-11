#include "Warehouse.h"
#include <iostream>

using namespace std;

Warehouse::Warehouse() {

	nID = 999;
	sName = "No Name";
	rk = Rack ();

	cout << endl << "Warehouse::Warehouse() with ID " << nID;
}

Warehouse::Warehouse(int id, string name, Rack &r) {

	nID = id;
	sName = name;
	rk = r;

	cout << endl << "Warehouse::Warehouse(Param) with ID " << nID;
}

Warehouse::~Warehouse() {

	cout << endl << "Warehouse::~Warehouse() with ID " << nID;
}

void Warehouse::printDetails() {

	cout << endl << "Warehouse::printDetails with ID   " << nID;
	cout << endl << "Warehouse::printDetails with Name " << sName;
	cout << endl << "Below are the rack dimensions in the Warehouse ...";
	rk.printDetails();
}