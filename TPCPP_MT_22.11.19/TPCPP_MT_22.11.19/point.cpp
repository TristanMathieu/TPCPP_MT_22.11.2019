#include "point.h"
#include <iostream>

int point::nombre = 0;

point::point()
{
	this->x = 0;
	this->y = 0;
	nombre++;
}


point::~point()
{
}

void point::askNb()
{
	std::cout << "Il y a " << this->nombre << " points." << std::endl;
}
