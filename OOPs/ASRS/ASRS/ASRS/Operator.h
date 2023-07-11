#pragma once
#include "Employees.h"
#include <string>

using namespace std;

class Operator :
    public Employees
{
private:
    int nMachID;

public:
    Operator ();
    Operator(int nID, string sNam, int nMacID);

    ~Operator();

    string getOperatorDetails();

    void printDetails();
};

