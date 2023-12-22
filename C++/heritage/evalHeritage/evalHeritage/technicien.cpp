#include "technicien.h"

technicien::technicien( std::string nom, std::string prenom, int age)
	: employe( nom, prenom, age, salaire) {
	this->salaire = 40;
}

