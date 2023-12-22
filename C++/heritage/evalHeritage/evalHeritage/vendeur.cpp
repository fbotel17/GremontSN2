#include "vendeur.h"

vendeur::vendeur(std::string raisonSociale, std::string nom, std::string prenom, int age)
	: commerciaux(raisonSociale, nom, prenom, age) {
	this->prime = 2;
	this->salaire = salaire+ prime;
}