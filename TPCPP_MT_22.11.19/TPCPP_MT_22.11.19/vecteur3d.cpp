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

void vecteur3d::setY(float Y) {
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

int vecteur3d::coincide(float x, float y, float z)
{
	if (this->x == x && this->y == y && this->z == z) {
		return 1; //on prend l'idée d'une valeur booleene : 1 signifie qu'elles coincides, 0 ne coincides pas
	} else {
		return 0;
	}
}

int vecteur3d::coincide(vecteur3d v2)
{
	if (this->x == v2.getX() && this->y == v2.getY() && this->z == v2.getZ()) {
		return 1;
	} else {
		return 0;
	}
}
