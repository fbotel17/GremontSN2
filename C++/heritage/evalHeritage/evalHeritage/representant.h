#pragma once
#include "commerciaux.h"
class representant :
	public commerciaux
{
	representant(std::string raisonSociale, std::string nom, std::string prenom, int age);
};

