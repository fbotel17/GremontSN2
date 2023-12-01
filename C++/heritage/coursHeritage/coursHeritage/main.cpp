// coursHeritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Vecteur3.h"
#include <conio.h>

using namespace std;

int main(int argc, char ** argv)
{
	vecteur *u;
	vecteur3 *v;
	u = new vecteur(3, 5);
	v = new vecteur3(4, 6);
	u = v; // est autorisée, il y a conversion fictive de v en un vecteur
	v = u; // est interdite
	u.affiche();
	v.affiche();
	w.affiche();
	_getch();
}
