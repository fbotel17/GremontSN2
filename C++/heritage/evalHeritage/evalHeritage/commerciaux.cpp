#include "commerciaux.h"

commerciaux::commerciaux(std::string raisonSociale, std::string nom, std::string prenom, int age)
	: employe(raisonSociale, nom, prenom, age) {
	this->salaire = 50;
}