#pragma once
class vecteur3d
{
private:
	//Attributs
	float x, y, z; //pour les 3 composantes (cartésiennes)

public:
	//Constructeurs
	//Exo a
	vecteur3d();
	vecteur3d(float x, float y, float z);
	//Exo b
	//vecteur3d(float = 0.0, float = 0.0, float = 0.0);
	//Exo c
	//vecteur3d(float x = 0.0, float y = 0.0, float z = 0.0) { this->x = x; this->y = y; this->z = z;};

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

};

