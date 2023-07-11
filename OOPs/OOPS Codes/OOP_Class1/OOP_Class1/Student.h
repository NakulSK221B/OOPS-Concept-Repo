#pragma 

#include <string>
using namespace std;

class Student
{
private:
	static int nStudentCount;

	int nRollNumber;
	int nHeight;
	string sFirstName;
	string sLastName;

public:

	// Default Constructor
	Student();
	// Parameterized Constructors
	Student(int nRN, int nHgt);
	Student(string sFN, string sLN);
	Student(const Student& student);

	~Student();

	void setRollNumber(int nRN);
	int getRollNUmber();

	void setHeight(int nHgt);

	void printStudentDetails();

	// Function Overloading
	int Add(int nX, int nY);
	double Add(double dX, double dY);
	string Add(string sX, string sY);

	// Returning Objects
	Student getDummyStudentObject();

	// Friend Function
	friend int Sum(const Student& tmpObj);

	// Operator Overloading
	void operator ++ ();
	Student operator + (const Student& tmpObj);

	// Static Function
	static void someStaticFunction();
};

