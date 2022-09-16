#pragma once
#include "shape.h"
class rectangle :
    public shape
{
    int side1 , side2 ;
public:
     void calculateField();
     void calculateCircuit();
     void ShowFormulas();
     rectangle(/* args */);
};

