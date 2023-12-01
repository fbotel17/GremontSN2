#include "etudiant.h"

etudiant::etudiant(std::string lenom, std::string leprenom, int annee, char *classe, float *Moyenne, std::string commentaires)
	: personne(lenom, leprenom, annee)
{
	this->commentaires = commentaires;
	strncpy_s(this->classe, classe, sizeof(this->classe) - 1);
	for (int i = 0; i < 3; i++)
	{
		this->moyenne[i] = Moyenne[i]; // Correction ici : utilisez Moyenne au lieu de moyenne
	}
}

etudiant::~etudiant()
{
}

void etudiant::affiche()
{
	personne::affiche();
	std::cout << "Classe :" << classe << ", Moyennes :";
	for (int i = 0; i < 3; i++)
	{
		std::cout << moyenne[i] << " ";
	}
	std::cout << ", Commentaires : " << commentaires.c_str() << std::endl;
}
