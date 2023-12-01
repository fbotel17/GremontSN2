#pragma once

#include <iostream>
#include <conio.h>

// classe mère
class vecteur
{
protected:
	float x, y;
public:
	vecteur(float abs = 0, float ord = 0); // Constructeur
	~vecteur(); // Destructeur
	void homothetie(float);
	void affiche();
};

