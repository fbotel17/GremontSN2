#pragma once

#include <iostream>

class personne
{
	std::string nom;
	std::string renom;
	int annee;
public:
	personne(std::string lenom, std::string leprenom, int annee);
	~personne();
	void affiche();
};

