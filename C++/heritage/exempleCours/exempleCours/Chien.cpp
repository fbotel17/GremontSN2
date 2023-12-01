#include "Chien.h"
#include <iostream>


Chien::Chien(std::string nom, int age, int nbPattes)
	: Animal(nom, age, nbPattes)
{
}

void Chien::cri()
{
	std::cout << "Wouaf !" << std::endl;

}
