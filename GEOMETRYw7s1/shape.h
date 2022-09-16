#pragma once
#include <iostream>
#include <string>

class shape
{
protected:
    std::string name;
    int field;
    int circuit;
  
public:
    void toString();
    virtual void calculateField() = 0;
    virtual void calculateCircuit() = 0;
    int getterCircuit();
    int getterField();
    std::string getterName();
    void getterAllPrint();
    virtual void ShowFormulas() = 0;
    shape(/* args */);
    ~shape();
};


