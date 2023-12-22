#pragma once
#include "commerciaux.h"
class representant :
	public commerciaux
{
public:
	representant( std::string nom, std::string prenom, int age);
	~representant() = default;
	void setNbDeplacement(int val);
	int getNbDeplacement();
	void resetDeplacement();
	void ajouterDeplacement(int nombreDeplacements);

protected:
	int nbrDeplacement;

};

