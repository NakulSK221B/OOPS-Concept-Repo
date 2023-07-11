#include "Operations.h"
#include <iostream>

using namespace std;

int Operations::nOpnCountStore = 0;
int Operations::nOpnCountRetrieve = 0;

Operations::Operations() {

	cout << endl << "Operations::Operations() .... ";
}

Operations::~Operations() {

	cout << endl << "Operations::~Operations() .... ";
}

void Operations::printDetails() {

	cout << endl << "Operations::printDetails Number of storing Operations carriedout    =  " << Operations::nOpnCountStore;
	cout << endl << "Operations::printDetails Number of retrieving Operations carriedout =  " << Operations::nOpnCountRetrieve;
}

void Operations::StoreOperations(Operator& op, Product& prd, Hardware& hw, Location& loc) {

	cout << endl << "Operations::StoreOperations Operator " << op.getOperatorDetails() <<
		" is storing " << prd.getProdID() <<
		" using hardware " << hw.getHarwareDetails() <<
		" at location " << loc.getLocationDetails();

	nOpnCountStore++;
}

void Operations::RetrieveOperations(Operator& op, Product& prd, Hardware& hw, Location& loc) {

	cout << endl << "Operations::RetrieveOperations Operator " << op.getOperatorDetails() <<
		" is retrieving " << prd.getProdID() <<
		" using hardware " << hw.getHarwareDetails() <<
		" at location " << loc.getLocationDetails();

	nOpnCountRetrieve++;
}
