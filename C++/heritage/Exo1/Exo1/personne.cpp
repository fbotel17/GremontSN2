#include "personne.h"

personne::personne(std::string lenom, std::string leprenom, int annee)
{
	this->nom = lenom;
	this->renom = leprenom;
	this->annee = annee;
}

personne::~personne()
{
}

void personne::affiche()
{
	std::cout << "Voici le nom : " << nom.c_str() << std::endl;
	std::cout << "Voici le prenom : " << renom.c_str() << std::endl;
	std::cout << "Voici l'annee : " << annee << std::endl;
}
