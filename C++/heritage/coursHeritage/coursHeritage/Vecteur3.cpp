#include "Vecteur3.h"

using namespace std;

vecteur3::vecteur3(float abs, float ord, float haut)
	: vecteur(abs, ord) // Appel du constructeur de la classe m�re avec les param�tres ad�quats
{
	z = haut;
	std::cout << "Constructeur fille" << std::endl;
}

vecteur3::~vecteur3()
{
	std::cout << "Destructeur fille" << std::endl;
}

void vecteur3::homothetie(float val)
{
	vecteur::homothetie(val); // fonction membre de la classe vecteur
	z = z * val;
}

void vecteur3::affiche()
{
	vecteur::affiche(); // fonction membre de la classe vecteur
	cout << "z = " << z << "\n";
}