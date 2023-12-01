#pragma once
#include "Animal.h"
class Chien :
	public Animal
{
public:
	Chien(std::string nom, int age, int nbPattes = 4);
	virtual void cri();

};

