#include "vecteur3d.h"
#include <iostream>


//Constructeurs

//Destructeur
vecteur3d::~vecteur3d()
{
}

//Getters
float vecteur3d::getX() {
	return this->x;
}

float vecteur3d::getY()
{
	return this->y;
}

float vecteur3d::getZ()
{
	return this->z;
}

//Setters
void vecteur3d::setX(float x) {
	this->x = x;
}

void vecteur3d::setY(float y) {
	this->y = y;
}

void vecteur3d::setZ(float z) {
	this->z = z;
}

//Méthodes
void vecteur3d::afficher()
{
	std::cout << "Bonsoir : " << this->getX() << std::endl;
}
float vecteur3d::normax(vecteur3d v2)
{
	if ((this->x*this->y*this->z) > (v2.getX()*v2.getY()*v2.getZ())){
		return this->x*this->y*this->z;
	} else {
		return v2.getX()*v2.getY()*v2.getZ();
	}
}
vecteur3d vecteur3d::normal(vecteur3d v2)
{
	if ((this->x*this->y*this->z) > (v2.getX()*v2.getY()*v2.getZ())) {
		return this;
	}
	else {
		return v2;
	}
}
/*
int vecteur3d::coincide(vecteur3d v2)
{
	if (this->x == v2.getX() && this->y == v2.getY() && this->z == v2.getZ()) {
		return 1;
	} else {
		return 0;
	}
}
*/

