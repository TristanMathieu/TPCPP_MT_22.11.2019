#include <iostream>
#include "vecteur3d.h"

int main()
{
	//Initialisation
	vecteur3d test;
	vecteur3d test2;


	//Programme
	test.afficher();

	test.setX(5);
	test2.setX(1);
	test2.setY(8);
	test.somme(test2).afficher();
	std::cout << test.pScalaire(test2) << std::endl;
	system("pause");
	return 0;
}