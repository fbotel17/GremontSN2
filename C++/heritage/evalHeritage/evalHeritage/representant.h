#pragma once
#include "commerciaux.h"
class representant :
	public commerciaux
{
public:
	representant(std::string raisonSociale, std::string nom, std::string prenom, int age);
	void setNbDeplacement(int val);
	int getNbDeplacement();
	void resetDeplacement();

protected:
	int nbrDeplacement;

};

