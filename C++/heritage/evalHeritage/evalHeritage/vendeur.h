#pragma once
#include "commerciaux.h"
class vendeur :
	public commerciaux
{
public:
	vendeur(std::string nom, std::string prenom, int age);
};

