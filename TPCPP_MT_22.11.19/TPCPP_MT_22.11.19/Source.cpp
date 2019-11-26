#include <iostream>
#include "vecteur3d.h"

int main()
{
	//Initialisation
	vecteur3d test;
	vecteur3d test2;


	//Programme
	test.afficher();

	std::cout << "Les valeurs coincides-t-elles? : " << test.coincide(test2.getX(), test2.getY(), test2.getZ()) << std::endl;

	std::cout << "Les valeurs coincides-t-elles? : " << test.coincide(test2) << std::endl;

	test.setX(5);

	std::cout << "Les valeurs coincides-t-elles? : " << test.coincide(test2.getX(), test2.getY(), test2.getZ()) << std::endl;

	std::cout << "Les valeurs coincides-t-elles? : " << test.coincide(test2) << std::endl;

	system("pause");
	return 0;
}