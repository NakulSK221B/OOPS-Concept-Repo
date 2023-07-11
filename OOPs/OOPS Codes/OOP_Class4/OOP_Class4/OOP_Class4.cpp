// OOP_Class4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "derived1.h"
#include "derived2.h"
#include "derived3.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    derived3 obj;
    obj.ii = 10;
    //obj.jj = 10;
    //obj.kk = 20;
    //obj.sum = 30;
    //obj.derived1::ii = 40;
    //obj.derived2::ii = 50;



    cout << endl;
    //obj.derived1::ii = 10; // use the virtual class
    //obj.jj = 20;
    //obj.kk = 30;


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
