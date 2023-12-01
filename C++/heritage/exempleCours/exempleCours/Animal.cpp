#include "Animal.h"
#include <iostream>

Animal::Animal(std::string nom, int age, int nbPattes)
{
	this->nom = nom;
	this->age = age;
	this->nbPattes = nbPattes;
}

Animal::~Animal()
{
	std::cout << nom.c_str() << " est mort ..." << std::endl;
}

void Animal::cri()
{
	std::cout << "Undefined" << std::endl;
}
