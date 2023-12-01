#pragma once

#include "Vecteur.h"

class vecteur3 : public vecteur // classe fille
{
	float z;
public:
	vecteur3(float abs = 0, float ord = 0, float haut = 0); // Constructeur
	~vecteur3(); // Destructeur
	void homothetie(float);
	void hauteur(float ha) { z = ha; }
	void affiche();
};

