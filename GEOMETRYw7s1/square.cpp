#include "square.h"

void square::calculateField()
{
	field = side1 * side1;
}

void square::calculateCircuit()
{
	circuit = side1 * 4;
}

void square::ShowFormulas()
{
	std::cout << " field = a * a " << std::endl;
	std::cout << " circuit = a * 4 " << std::endl;
}



square::square()
{
	name = "square";
	std::cout << "enter the length of 1 side" << std::endl;
	std::cin >> side1;
	calculateField();
	calculateCircuit();

}
