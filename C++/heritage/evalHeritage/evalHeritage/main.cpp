// evalHeritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "employe.h"
#include "technicien.h"
#include "commerciaux.h"
#include "vendeur.h"
#include <string>

#include <iostream>

int main()
{
	employe* employeObj = new employe("Providence", "Bot1", "Faut", 64);
	technicien* employeObj1 = new technicien("Providence", "Bot2", "Faut", 64);
	commerciaux* employeObj2 = new commerciaux("Providence", "Bot3", "Faut", 64);
	vendeur* employeObj3 = new vendeur("Providence", "Bot4", "Faut", 64);

	std::cout << "Nom: " << employeObj3->getNom() << std::endl;
	std::cout << "Prenom: " << employeObj3->getPrenom() << std::endl;
	std::cout << "Age: " << employeObj3->getAge() << std::endl;
	std::cout << "Salaire : " << employeObj3->getSalaire() << std::endl;


	return 0;
}

