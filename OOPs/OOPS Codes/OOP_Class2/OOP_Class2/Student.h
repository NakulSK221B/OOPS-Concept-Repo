#pragma once

#include <string>
using namespace std;

class Student
{
private:
	static int nStudentCount;

	int nRollNumber;
	int nHeight;

public:

	// Default Constructor
	Student();
	// Parameterized Constructors
	Student(int nRN, int nHgt);

	Student(const Student& Obj);

	~Student();

	void setRollNumber(int nRN);
	int getRollNUmber();

	void setHeight(int nHgt);

	void printStudentDetails();

	int Add(int nX, int nY);
	double Add(double nX, double nY);
	string Add(string nX, string nY);

	// Friend Function
	friend int Sum(const Student& tmpObj);

	// Returning Objects
	Student dummyReturnObj();

	// Static Member Functions
	static void dummyStaticMemberFunction();

	// Operator Overloading
	void operator ++ ();
	Student operator + (const Student& iObj);
};

