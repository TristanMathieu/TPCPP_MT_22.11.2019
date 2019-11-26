#include <iostream>
#include "vecteur3d.h"

int main()
{
	//Initialisation
	vecteur3d test;
	vecteur3d test2;


	//Programme
	test.afficher();
	std::cout << test.normax(test2) << std::endl;
	
	test.setX(5);
	test.setY(5);
	test.setZ(5);
	
	std::cout << test.normax(test2) << std::endl;

	system("pause");
	return 0;
}