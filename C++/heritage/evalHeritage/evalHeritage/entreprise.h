#pragma once
#include <iostream>
#include <vector>
#include "commerciaux.h"
#include "technicien.h"
#include "representant.h"

class entreprise {
public:
	entreprise(std::string name, int maxCommerciaux, int maxTechniciens);
	~entreprise();

	std::string getRaisonSociale() const;
	int getNombreMaxCommerciaux() const;
	void setNombreMaxCommerciaux(int max);
	int getNombreMaxTechniciens() const;
	void setNombreMaxTechniciens(int max);

	void ajouterCommercial(commerciaux* commercial);
	void ajouterTechnicien(technicien* technicien);

	int getNombreVendeurs() const;
	int getNombreRepresentants() const;

	void afficherSalaires() const;
	

private:
	std::string raisonSociale;
	int nombreMaxCommerciaux;
	int nombreMaxTechniciens;
	int nombreCommerciaux;
	int nombreTechniciens;

	int nombreVendeurs;  // Ajout de variables de suivi
	int nombreRepresentants;  // Ajout de variables de suivi


	std::vector<commerciaux*> commerciauxs;
	std::vector<technicien*> techniciens;
};
