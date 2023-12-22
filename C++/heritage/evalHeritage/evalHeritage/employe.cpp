#include "employe.h"

employe::employe( std::string nom, std::string prenom, int age, int salaire)
	:  nom(std::move(nom)), prenom(std::move(prenom)), age(age), salaire(salaire) {
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

void employe::setNom(string name)
{
	nom = name;
}

void employe::setPrenom(string name)
{
	prenom = name;
}

void employe::setAge(int nbAge)
{
	this->age = nbAge;
}

void employe::setSalaire(int nbSalaire)
{
	salaire = nbSalaire;
}
