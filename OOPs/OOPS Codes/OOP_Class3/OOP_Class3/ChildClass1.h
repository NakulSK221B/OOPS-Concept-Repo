#pragma once
#include "BaseClass.h"
class ChildClass1 : public BaseClass
{
private:
	int nCC1Private;

protected:
	int nCC1Prot;

public:
	ChildClass1();
	ChildClass1(int nIn);
	~ChildClass1();
	void printClassDetails();

	void PrintDetails();
};

