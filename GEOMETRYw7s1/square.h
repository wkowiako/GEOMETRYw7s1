#pragma once
#include "shape.h"
class square :
    public shape   
{
    int side1;
public:
    void calculateField();
    void calculateCircuit();
    void ShowFormulas();
    square(/* args */);
};

