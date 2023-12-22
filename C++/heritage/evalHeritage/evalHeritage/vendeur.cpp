#include "vendeur.h"

vendeur::vendeur( std::string nom, std::string prenom, int age)
	: commerciaux( nom, prenom, age) {
	this->prime = 2;
	this->salaire = salaire+ prime;
}