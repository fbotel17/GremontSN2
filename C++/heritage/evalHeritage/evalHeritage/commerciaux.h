#pragma once
#include "employe.h"
class commerciaux :
	public employe
{
public:
	commerciaux(std::string raisonSociale, std::string nom, std::string prenom, int age);

protected:
	int prime;
};

