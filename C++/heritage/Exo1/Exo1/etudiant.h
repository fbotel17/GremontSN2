#pragma once
#include "personne.h"
class etudiant :
	public personne
{
	char classe[5];
	float moyenne[3];
	std::string commentaires;
public:
	etudiant(std::string lenom,
		std::string leprenom,
		int annee,
		char *classe,
		float * Moyenne,
		std::string commentaires);
	~etudiant();
	void affiche();
};

