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
	std::cout << "< " << this->getX() << ", " << this->getY() << ", " << this->getZ() <<" >" << std::endl;
}


vecteur3d vecteur3d::somme(vecteur3d v2)
{
	vecteur3d resultat;
	resultat.setX(this->x + v2.getX());
	resultat.setY(this->y + v2.getY());
	resultat.setZ(this->z + v2.getZ());
	return resultat;
}

float vecteur3d::pScalaire(vecteur3d v2)
{	
	return (this->x*v2.getX())+(this->y*v2.getY())+(this->z*v2.getZ());
}
