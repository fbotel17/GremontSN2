#pragma once
#include "entreprise.h"

class employe : public entreprise {
public:
	employe(std::string raisonSociale, std::string nom, std::string prenom, int age);

	std::string getNom();
	std::string getPrenom();
	int getAge();
	int getSalaire();

protected:
	std::string nom;
	std::string prenom;
	int age;
	int salaire;
};
