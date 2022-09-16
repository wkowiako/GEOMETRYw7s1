#include "rectangle.h"

void rectangle::calculateField()
{
	shape::field = side1 * side2;
}

void rectangle::calculateCircuit()
{
	circuit = (side1 * 2) + (side2 * 2);
}

void rectangle::ShowFormulas()
{
	std::cout <<" field = a * b " << std::endl ;
	std::cout << " circuit = (a * 2) + (b * 2) " << std::endl;
}

//square::square() : shape::name("square")  //wtf  ??
rectangle::rectangle()
{
	name = "rectangle";
	std::cout << "enter the length of 1 side" << std::endl;
	std::cin >> side1 ;
	std::cout << "enter the length of 2 side " << std::endl;
	std::cin >> side2 ;
    calculateField();
	calculateCircuit();
}
