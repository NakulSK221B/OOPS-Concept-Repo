#pragma once
#include "ChildClass1.h"
class ChildClass2 : public ChildClass1
{
private:
	int nCC2Private;

protected:
	int nCC2Prot;

public:
	ChildClass2();
	ChildClass2(int nIn);
	~ChildClass2();
	void printClassDetails();
};

