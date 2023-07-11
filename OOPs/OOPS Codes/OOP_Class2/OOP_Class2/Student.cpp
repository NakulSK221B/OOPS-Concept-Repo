#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {

	cout << "Student: Default Constructor ..." << endl;

	nRollNumber = 0;
	nHeight = 0;

	++nStudentCount;
}

Student::Student(int nRN, int nHgt) {

	cout << "Student: Constructor with PARAMETERS (INT) ..." << endl;

	nRollNumber = nRN;
	nHeight = nHgt;

	++nStudentCount;
}

Student::Student(const Student& Obj) {

	nRollNumber = Obj.nRollNumber + 1;
	nHeight = Obj.nHeight + 22;

	++nStudentCount;

	cout << "Student: COPY Constructor ..." << nRollNumber << endl;
}

Student::~Student() {

	--nStudentCount;

	cout << "Student: Destructor ..." << nRollNumber << endl;
}

void Student::setRollNumber(int nRN) {

	nRollNumber = nRN;

	cout << "setRollNumber: Roll Number is " << nRollNumber << endl;
}

void Student::setHeight(int nHgt) {

	nHeight = nHgt;

	cout << "setHeight: Height is " << nHeight << endl;
}

int Student::getRollNUmber() {

	//int nRollnumber = 999;

	cout << "getRollNUmber: Roll Number is " << nRollNumber << endl;
	return nRollNumber;
}

void Student::printStudentDetails() {

	cout << "printStudentDetails: Roll Number is   " << nRollNumber << endl;
	cout << "printStudentDetails: Height is        " << nHeight << endl;
	cout << "printStudentDetails: Student Count is " << nStudentCount << endl;
}

int Student::Add(int nX, int nY) {

	cout << "Add: INT ... " << nX + nY << endl;

	return nX + nY;
}

double Student::Add(double nX, double nY) {

	cout << "Add: DOUBLE ... " << nX + nY << endl;

	return nX + nY;
}

string Student::Add(string nX, string nY) {

	cout << "Add: STRING ... " << nX.append(nY) << endl;

	return nX.append(nY);
}

Student Student::dummyReturnObj() {

	cout << "dummyReturnObj: Inside returning object ... " << endl;
	
	Student obj(30, 20);
	obj.printStudentDetails();

	return obj;
}

void Student::dummyStaticMemberFunction() {

	cout << "dummyStaticMemberFunction: I am here ..." << nStudentCount << endl;
}

void Student::operator ++ () {

	++nHeight;
	cout << "operator ++: Operator Overloading ..." << nStudentCount << endl;
}

Student Student::operator + (const Student& iObj) {

	cout << "operator +: Operator Overloading ..." << endl;

	Student tmpObj;

	tmpObj.nHeight = nHeight + iObj.nHeight;

	return tmpObj;
}