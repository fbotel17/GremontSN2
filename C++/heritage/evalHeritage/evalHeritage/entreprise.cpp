#include "entreprise.h"
#include "representant.h"
#include "vendeur.h"


entreprise::entreprise(std::string name, int maxCommerciaux, int maxTechniciens)
	: raisonSociale(name), nombreMaxCommerciaux(maxCommerciaux), nombreMaxTechniciens(maxTechniciens),
	nombreCommerciaux(0), nombreTechniciens(0) {}

entreprise::~entreprise() {
	// Libérer la mémoire des commerciaux
	for (auto& commercial : commerciauxs) {
		delete commercial;
	}

	// Libérer la mémoire des techniciens
	for (auto& technicien : techniciens) {
		delete technicien;
	}
}

std::string entreprise::getRaisonSociale() const {
	return raisonSociale;
}

int entreprise::getNombreMaxCommerciaux() const {
	return nombreMaxCommerciaux;
}

void entreprise::setNombreMaxCommerciaux(int max) {
	nombreMaxCommerciaux = max;
}

int entreprise::getNombreMaxTechniciens() const {
	return nombreMaxTechniciens;
}

void entreprise::setNombreMaxTechniciens(int max) {
	nombreMaxTechniciens = max;
}

void entreprise::ajouterCommercial(commerciaux* commercial) {
	if (nombreCommerciaux < nombreMaxCommerciaux) {
		commerciauxs.push_back(commercial);
		nombreCommerciaux++;

		if (vendeur* v = dynamic_cast<vendeur*>(commercial)) {
			if (nombreVendeurs < 2) {
				nombreVendeurs++;
			}
			else {
				std::cout << "Limite de vendeurs atteinte.\n";
			}
		}
		else if (representant* r = dynamic_cast<representant*>(commercial)) {
			if (nombreRepresentants < 3) {
				nombreRepresentants++;
			}
			else {
				std::cout << "Limite de representants atteinte.\n";
			}
		}
	}
	else {
		std::cout << "Limite de commerciaux atteinte.\n";
	}
}

void entreprise::ajouterTechnicien(technicien* technicien) {
	if (nombreTechniciens < nombreMaxTechniciens) {
		techniciens.push_back(technicien);
		nombreTechniciens++;
	}
	else {
		std::cout << "Limite de techniciens atteinte.\n";
	}
}

void entreprise::afficherSalaires() const {
	std::cout << "Salaires des commerciaux :\n";
	for (const auto& commercial : commerciauxs) {
		std::cout << commercial->getNom() << " " << commercial->getPrenom() << " : "
			<< commercial->getSalaire() << " euros\n";
	}

	std::cout << "Salaires des techniciens :\n";
	for (const auto& technicien : techniciens) {
		std::cout << technicien->getNom() << " " << technicien->getPrenom() << " : "
			<< technicien->getSalaire() << " euros\n";
	}
}


int entreprise::getNombreVendeurs() const {
	return nombreVendeurs;
}

int entreprise::getNombreRepresentants() const {
	return nombreRepresentants;
}