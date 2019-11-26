#pragma once
class vecteur3d
{
private:
	//Attributs
	float x, y, z;

public:
	//Constructeurs
	vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) { this->x = c1; this->y = c2; this->z = c3; };

	//Destructeur
	~vecteur3d();

	//Getters
	float getX();
	float getY();
	float getZ();

	//Setters
	void setX(float x);
	void setY(float y);
	void setZ(float z);

	//Méthodes
	void afficher();
	vecteur3d somme(vecteur3d v2);
	float pScalaire(vecteur3d v2);
};