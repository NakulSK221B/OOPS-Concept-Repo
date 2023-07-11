// ASRS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Operator.h"
#include "Product.h"
#include "Employees.h"
#include "Location.h"
#include "Hardware.h"
#include "Rack.h"
#include "Warehouse.h"
#include "Operations.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    Employees emp(420, "Joe");
    emp.printDetails();

    cout << endl << "-------------------------" << endl;

    Operator op(1234, "Max", 4321);
    op.printDetails();

    cout << endl << "-------------------------" << endl;

    Product prd;
    prd.printDetails();

    cout << endl << "-------------------------" << endl;

    Location loc(10, 20);
    loc.printDetails();

    cout << endl << "-------------------------" << endl;

    Hardware hw;
    hw.printDetails();

    cout << endl << "-------------------------" << endl;

    Rack rk(10, 20, 30);
    rk.printDetails();
    rk.AddStorageLocation(loc);

    cout << endl << "-------------------------" << endl;

    Warehouse wh(444, "Hubli", rk);
    wh.printDetails();

    cout << endl << "-------------------------" << endl;

    Operations opn1;
    opn1.StoreOperations(op, prd, hw, loc);
    opn1.StoreOperations(op, prd, hw, loc);
    opn1.StoreOperations(op, prd, hw, loc);
    opn1.StoreOperations(op, prd, hw, loc);
    opn1.printDetails();

    opn1.RetrieveOperations(op, prd, hw, loc);
    opn1.printDetails();

    cout << endl << "-------------------------" << endl;

}

