#pragma once
#include "derived1.h"
#include "derived2.h"

class derived3 :
    public derived1, public derived2
{
public:
    int sum;

    derived3();
};

