#include "shape.h"

void shape::toString()
{
	std::cout << name << std::endl;
	std::cout << "field " << field << std::endl;
	std::cout << "circuit " << circuit << std::endl;
}

int shape::getterCircuit()
{
	return circuit;
}

int shape::getterField()
{
	return field;
}

std::string shape::getterName()
{
	return name;
}


void shape::getterAllPrint()
{
	std::cout << name << " field " << field << " circuit " << circuit << std::endl;
	//popraw dostnie sie do danych przez getery 
}

shape::shape(): name("noname"), field(0), circuit(0) {}
shape::~shape(){}
