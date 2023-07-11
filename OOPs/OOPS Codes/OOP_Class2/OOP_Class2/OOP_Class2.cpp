// OOP_Class2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"

using namespace std;

int Student::nStudentCount = 0;

int main()
{
    std::cout << "Hello World!\n";
    
    Student myStudent;
    myStudent.setRollNumber(10);
    myStudent.setHeight(150);
    myStudent.printStudentDetails();

    myStudent.Add(5, 11);
    myStudent.Add(5.5, 11.7);
    myStudent.Add("He", "llo!");

    Student sObj1(20, 200);
    sObj1.printStudentDetails();

    Student sObj2(sObj1);
    sObj2.printStudentDetails();

    Sum(sObj2);

    Student sObj3 = sObj2.dummyReturnObj();
    sObj3.printStudentDetails();

    Student::dummyStaticMemberFunction();

    ++sObj3;

    Student sObj4 = sObj2 + sObj3;

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
