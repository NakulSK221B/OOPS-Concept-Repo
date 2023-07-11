// OOP_Class1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"

// static data member
int Student::nStudentCount = 0;

void dummyFunction(int nX = 100) {

    cout << "dummyFunction: nX =  " << nX << endl;
}

int main()
{
    std::cout << "Hello World!\n\n";

    Student myStudent;
    myStudent.setRollNumber(10);
    myStudent.setHeight(150);
    myStudent.printStudentDetails();

    cout << endl << "-----------------------------------------" << endl;

    Student myStudent1 ("Max", "Joe");
    myStudent1.setRollNumber(11);
    myStudent1.setHeight(170);
    myStudent1.printStudentDetails();

    cout << endl << "-----------------------------------------" << endl;

    myStudent1.Add(10, 20);
    myStudent1.Add(100.125, 200.0);
    myStudent1.Add("He", "llo!");

    Student myCpyStudent(myStudent1);
    myCpyStudent.printStudentDetails();

    cout << endl << "-----------------------------------------" << endl;

    Student myStudent2(21, 141);
    myStudent2.printStudentDetails();

    cout << endl << "-----------------------------------------" << endl;
    // Returning Objects
    Student tmpStudentObj = myStudent.getDummyStudentObject();
    tmpStudentObj.printStudentDetails();

    cout << endl << "-----------------------------------------" << endl;
    // Friend Function 
    Sum(tmpStudentObj);

    cout << endl << "-----------------------------------------" << endl;

    dummyFunction();

    cout << endl << "-----------------------------------------" << endl;

    // Unary operator overloading
    ++tmpStudentObj;

    cout << endl << "-----------------------------------------" << endl;

    // Binary operator overloading
    Student sObj1 (20, 130), sObj2 (30, 150);

    Student sObj3 = sObj1 + sObj2;
    sObj3.printStudentDetails();

    cout << endl << "-----------------------------------------" << endl;

    Student::someStaticFunction();

    cout << endl << "-----------------------------------------" << endl;
}

int Sum(const Student& tmpObj) {

    cout << "Sum: Inside SUM ... " << endl;
    return tmpObj.nHeight;
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
