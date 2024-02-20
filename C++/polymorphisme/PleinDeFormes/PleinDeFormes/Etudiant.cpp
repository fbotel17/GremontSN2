#include "Etudiant.h"

Etudiant::Etudiant(std::string nom, std::string prenom, int age, std::string telephone, std::string adresse, std::string email, std::vector<matiere> matieres, std::string classe)
	:Humain(nom, prenom, age, telephone, adresse, email)
{
	this->matieres.swap(matieres);
	this->classe = classe;
}
