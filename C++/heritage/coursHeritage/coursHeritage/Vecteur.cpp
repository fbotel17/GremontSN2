#include "Vecteur.h"

using namespace std;

vecteur::vecteur(float abs, float ord)
{
	x = abs;
	y = ord;
	std::cout << "Constructeur mere" << std::endl;
}

vecteur::~vecteur()
{
	std::cout << "Destructeur mere" << std::endl;
}

void vecteur::homothetie(float val)
{
	x = x * val;
	y = y * val;
}

void vecteur::affiche()
{
	cout << "x = " << x << " y = " << y << "\n";
}