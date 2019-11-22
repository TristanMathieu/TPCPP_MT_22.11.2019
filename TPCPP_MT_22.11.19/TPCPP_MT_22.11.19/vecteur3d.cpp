#include "vecteur3d.h"
#include <iostream>
//#include <cmath>
#include <cstdlib>


//Constructeurs
//Exo 1.a
vecteur3d::vecteur3d()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

vecteur3d::vecteur3d(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

//Exo 1.b
/*
vecteur3d::vecteur3d(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
*/

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

void vecteur3d::afficher()
{
	std::cout << "Bonsoir : " << this->getX() << std::endl;
}

//Méthodes

