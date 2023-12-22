#include "representant.h"

representant::representant(std::string raisonSociale, std::string nom, std::string prenom, int age)
	: commerciaux(raisonSociale, nom, prenom, age) {
	this->prime = 5;
	this->nbrDeplacement = 0;
	this->salaire = salaire + prime + 3*nbrDeplacement;
}

void representant::setNbDeplacement(int val)
{
	nbrDeplacement += val;
}

int representant::getNbDeplacement()
{
	return nbrDeplacement;
}

void representant::resetDeplacement()
{
	nbrDeplacement = 0;
}
