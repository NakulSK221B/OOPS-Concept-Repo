#pragma once
#include <string>
using namespace std;

class Product
{
private:
	int nProdID;
	string sProdDesc;

public:
	Product();
	Product(int id, string descri);

	~Product();

	void printDetails();

	int getProdID();
};

