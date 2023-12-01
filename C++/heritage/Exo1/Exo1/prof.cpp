#include "prof.h"
#include <iostream>


prof::prof(std::string lenom, std::string leprenom, int annee, std::string matiere, std::vector<std::string> classes)
	:personne(lenom, leprenom, annee)
{
	this->matiere = matiere;
	this->Classes = classes;
}

void prof::affiche()
{
	personne::affiche();
	std::cout << "Matiere :" << matiere.c_str() << ", Classes enseignées :  ";
	for (const auto& classe : Classes) {
		std::cout << classe.c_str() << " ";
	}
	std::cout << std::endl;
}
