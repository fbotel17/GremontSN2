#include "employe.h"

employe::employe(std::string raisonSociale, std::string nom, std::string prenom, int age)
	: entreprise(raisonSociale), nom(std::move(nom)), prenom(std::move(prenom)), age(age) {
	salaire = 0;
}


std::string employe::getNom() {
	return nom;
}

std::string employe::getPrenom()  {
	return prenom;
}

int employe::getAge()  {
	return age;
}

int employe::getSalaire()  {
	return salaire;
}
