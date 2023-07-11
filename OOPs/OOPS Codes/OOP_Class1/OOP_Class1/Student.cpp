#include "Student.h"
#include <iostream>
using namespace std;


Student::Student() {

	cout << "Student: Default Constructor ..." << endl;

	nRollNumber = 0;
	nHeight = 0;
	sFirstName = "";
	sLastName = "";

	nStudentCount++;

}

Student::Student(int nRN, int nHgt) {

	cout << "Student: Constructor with PARAMETERS (INT) ..." << endl;

	nRollNumber = nRN;
	nHeight = nHgt;
	sFirstName = "";
	sLastName = "";

	nStudentCount++;
}

Student::Student(string sFN, string sLN) {

	cout << "Student: Constructor with PARAMETERS (STR) ..." << endl;

	nRollNumber = 0;
	nHeight = 0;
	sFirstName = sFN;
	sLastName = sLN;

	nStudentCount++;
}

Student::Student(const Student& student) {

	cout << "Student: COPY Constructor ..." << student.nHeight << endl;

	nRollNumber = student.nRollNumber;
	nHeight = student.nHeight;
	sFirstName = student.sFirstName;
	sLastName = student.sLastName;

	nStudentCount++;
}

Student::~Student() {

	cout << "Student: Destructor ..." << sFirstName << " / " << nRollNumber << endl;

	nStudentCount--;
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
	cout << "printStudentDetails: First Name is    " << sFirstName << endl;
	cout << "printStudentDetails: Last Name is     " << sLastName << endl;
	cout << "printStudentDetails: Student Count is " << nStudentCount << endl;
}

// Function Overloading
int Student::Add(int nX, int nY) {

	cout << "Add: Inside Add INT ..." << nX + nY << endl;

	return nX + nY;
}

double Student::Add(double dX, double dY) {

	cout << "Add: Inside Add DOUBLE ..." << dX + dY << endl;

	return dX + dY;
}

string Student::Add(string sX, string sY) {

	cout << "Add: Inside Add STRING ... " << sX.append(sY) << endl;

	return sX.append(sY);
}

Student Student::getDummyStudentObject() {

	cout << "getDummyStudentObject: Inside Add STRING ... " << endl;

	Student tmpObj("Dummy", "Object");
	return tmpObj;
}



void  Student::operator ++ () {

	cout << "++: Height is " << nHeight << endl;
	nHeight =+ 2;
	cout << "++: Height is " << nHeight << endl;
}

Student Student::operator + (const Student& tmpObj) {

	cout << "+: I am here ... " << nHeight << endl;
	Student tmpStudent;
	tmpStudent.nRollNumber = nRollNumber + tmpObj.nRollNumber;
	tmpStudent.nHeight = nHeight + tmpObj.nHeight;

	return tmpStudent;
}

void Student::someStaticFunction() {

	cout << "someStaticFunction: I am here ... " << nStudentCount << endl;
}