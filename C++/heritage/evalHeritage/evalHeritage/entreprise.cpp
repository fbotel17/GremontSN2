#include "entreprise.h"
#include "representant.h"


entreprise::entreprise(std::string name, int maxCommerciaux, int maxTechniciens)
	: raisonSociale(name), nombreMaxCommerciaux(maxCommerciaux), nombreMaxTechniciens(maxTechniciens),
	nombreCommerciaux(0), nombreTechniciens(0) {}

entreprise::~entreprise() {
	// Lib�rer la m�moire des commerciaux
	for (auto& commercial : commerciauxs) {
		delete commercial;
	}

	// Lib�rer la m�moire des techniciens
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


