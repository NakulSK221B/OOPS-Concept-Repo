#pragma once
class BaseClass
{
private:
	int nBCPrivate;

protected:
	int nBCProt;

public:
	BaseClass();
	BaseClass(int iIn);
	~BaseClass();
	virtual void printClassDetails();

	void PrintDetails();
};

