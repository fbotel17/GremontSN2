#include <iostream>
#include "entreprise.h"
#include "commerciaux.h"
#include "technicien.h"
#include "vendeur.h"
#include "representant.h"

int main() {
	// Création de l'entreprise
	entreprise snEntreprise("SNEntreprise", 5, 5);

	// Vecteur pour stocker les employés
	std::vector<employe*> employes;

	// Menu principal
	int choix;
	do {
		std::cout << "Menu:\n";
		std::cout << "1. Ajouter un commercial\n";
		std::cout << "2. Ajouter un technicien\n";
		std::cout << "3. Afficher les salaires\n";
		std::cout << "0. Quitter\n";
		std::cout << "Entrez votre choix : ";
		std::cin >> choix;

		switch (choix) {
		case 1: {
			// Ajouter un commercial (vendeur ou représentant)
			int typeCommercial;
			std::cout << "1. Vendeur\n";
			std::cout << "2. Representant\n";
			std::cout << "Entrez le type de commercial : ";
			std::cin >> typeCommercial;

			// Vérifier les limites avant d'ajouter
			if ((typeCommercial == 1 && snEntreprise.getNombreVendeurs() < 2) ||
				(typeCommercial == 2 && snEntreprise.getNombreRepresentants() < 3)) {

				std::string nom, prenom;
				int age;
				std::cout << "Entrez le nom : ";
				std::cin >> nom;
				std::cout << "Entrez le prenom : ";
				std::cin >> prenom;
				std::cout << "Entrez l'age : ";
				std::cin >> age;

				employe* nouveauCommercial = nullptr;

				if (typeCommercial == 1) {
					nouveauCommercial = new vendeur(nom, prenom, age);
				}
				else if (typeCommercial == 2) {
					nouveauCommercial = new representant(nom, prenom, age);
				}

				if (nouveauCommercial != nullptr) {
					employes.push_back(nouveauCommercial);
					snEntreprise.ajouterCommercial(dynamic_cast<commerciaux*>(nouveauCommercial));

					// Pour un représentant, ajoutez des déplacements
					if (typeCommercial == 2) {
						int nbDeplacements;
						std::cout << "Entrez le nombre de déplacements du représentant : ";
						std::cin >> nbDeplacements;
						dynamic_cast<representant*>(nouveauCommercial)->ajouterDeplacement(nbDeplacements);
					}

					std::cout << "Commercial ajouté avec succès.\n";
				}
			}
			else {
				std::cout << "Limite de commerciaux atteinte.\n";
			}
			break;
		}
		case 2: {
			// Ajouter un technicien
			std::string nom, prenom;
			int age;
			std::cout << "Entrez le nom : ";
			std::cin >> nom;
			std::cout << "Entrez le prenom : ";
			std::cin >> prenom;
			std::cout << "Entrez l'age : ";
			std::cin >> age;

			employe* nouveauTechnicien = new technicien(nom, prenom, age);
			employes.push_back(nouveauTechnicien);
			snEntreprise.ajouterTechnicien(dynamic_cast<technicien*>(nouveauTechnicien));
			std::cout << "Technicien ajouté avec succès.\n";
			break;
		}
		case 3: {
			// Afficher les salaires
			snEntreprise.afficherSalaires();
			break;
		}
		case 0:
			std::cout << "Programme terminé.\n";
			break;
		default:
			std::cout << "Choix invalide. Veuillez réessayer.\n";
		}

	} while (choix != 0);

	// Libérer la mémoire des employés
	for (auto& employe : employes) {
		delete employe;
	}

	return 0;
}
