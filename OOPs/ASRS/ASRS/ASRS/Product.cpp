#include "Product.h"
#include <iostream>

using namespace std;

Product::Product() {

	nProdID = 999;
	sProdDesc = "NoProdName";

	cout << endl << "Product::Product() with ID " << nProdID;
}

Product::Product(int id, string descri) {

	nProdID = id;
	sProdDesc = descri;

	cout << endl << "Product::Product(Param) with ID " << nProdID;
}

Product::~Product() {

	cout << endl << "Product::~Product() with ID " << nProdID;

}

void Product::printDetails() {

	cout << endl << "Product::printDetails with ID   " << nProdID;
	cout << endl << "Product::printDetails with Description " << sProdDesc;
}

int Product::getProdID() {

	return nProdID;
}