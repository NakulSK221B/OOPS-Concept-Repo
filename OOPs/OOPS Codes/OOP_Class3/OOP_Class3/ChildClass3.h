#pragma once
class ChildClass3
{
private:
	int nCC3Private;

protected:
	int nCC3Prot;

public:
	ChildClass3();
	ChildClass3(int nIn);
	~ChildClass3();
	void printClassDetails();
};

