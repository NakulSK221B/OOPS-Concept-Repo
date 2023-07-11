// OOP_Class3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BaseClass.h"
#include "ChildClass1.h"
#include "ChildClass2.h"
#include "ChildClass3.h"
#include "ChildClass4.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    //BaseClass bc;
    //bc.printClassDetails ();
    
    ChildClass1 cc1 (10);
    //cc1.printClassDetails();
    //cc1.PrintDetails();

    //ChildClass2 cc2 (99);
    //cc2.printClassDetails();

    //ChildClass3 cc3(199);
    //cc3.printClassDetails();

    //ChildClass4 cc4(999);
    //cc4.printClassDetails();

    //cout << endl << "Late Binding" << endl;

    BaseClass* bc1, bc;

    bc1 = &bc;
    bc1->printClassDetails();

    bc1 = &cc1;
    bc1->printClassDetails();

    //bc1 = &cc2;
    //bc1->printClassDetails();

    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
