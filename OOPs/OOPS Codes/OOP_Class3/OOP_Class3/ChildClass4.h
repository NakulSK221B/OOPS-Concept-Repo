#pragma once
#include "ChildClass2.h"
#include "ChildClass3.h"

class ChildClass4: public ChildClass2, public ChildClass3
{
private:
	int nCC4Private;

protected:
	int nCC4Prot;

public:
	ChildClass4();
	ChildClass4(int nIn);
	~ChildClass4();
	void printClassDetails();
};

