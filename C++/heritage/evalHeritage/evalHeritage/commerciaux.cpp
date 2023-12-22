#include "commerciaux.h"

commerciaux::commerciaux( std::string nom, std::string prenom, int age)
	: employe( nom, prenom, age, salaire) {
	this->salaire = 50;
}