#pragma once
class Base
{
public:
	void printHello();

	virtual void printHelloClass();

	virtual void printHi() = 0;
};

