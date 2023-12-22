#include "representant.h"

representant::representant(std::string nom, std::string prenom, int age)
	: commerciaux(nom, prenom, age), nbrDeplacement(0) {
	this->prime = 5;
}

void representant::ajouterDeplacement(int nombreDeplacements) {
	nbrDeplacement += nombreDeplacements;
	this->salaire = salaire + prime + 3 * nbrDeplacement;
}

void representant::resetDeplacement() {
	nbrDeplacement = 0;
	this->salaire = salaire + prime + 3 * nbrDeplacement;
}

void representant::setNbDeplacement(int val)
{
	nbrDeplacement += val;
}

int representant::getNbDeplacement()
{
	return nbrDeplacement;
}

