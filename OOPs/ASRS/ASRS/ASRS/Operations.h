#pragma once
#include <string>
#include "Operator.h"
#include "Product.h"
#include "Hardware.h"
#include "Location.h"

using namespace std;

class Operations
{
private:
	static int nOpnCountStore;
	static int nOpnCountRetrieve;

public:
	Operations();

	~Operations();

	void printDetails();

	void StoreOperations(Operator& op, Product& prd, Hardware& hw, Location& loc);

	void RetrieveOperations(Operator& op, Product& prd, Hardware& hw, Location& loc);
};
