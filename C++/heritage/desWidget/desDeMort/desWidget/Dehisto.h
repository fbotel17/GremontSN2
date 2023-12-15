#pragma once
#include <vector>

#include "de.h"

class Dehisto :
	public de
{
	int valeur;
	int scoreTotal;

	
	std::vector<int> resultats;


public:
	Dehisto();
	std::vector<int> getResultats() const;
	void jet(); //simule le jet d’un dé
	void jet(int n); //simule le jet de n dé
};

