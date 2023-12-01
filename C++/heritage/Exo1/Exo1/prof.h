#pragma once
#include "personne.h"
#include <vector>

class prof :
	public personne
{
	std::string matiere;
	std::vector<std::string> Classes;
public:
	prof(std::string lenom,
		std::string leprenom,
		int annee,
		std::string matiere,
		std::vector<std::string> classes);
	void affiche();
};

