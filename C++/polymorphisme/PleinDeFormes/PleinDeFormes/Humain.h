#pragma once
#include <qstring.h>
#include "BaseHumainForm.h"

class Humain
{
	std::string nom;
	std::string prenom;
	int age;
	std::string telephone;
	std::string adresse;
	std::string email;
	
public:
	Humain(std::string nom, std::string prenom, int age, std::string telephone, std::string adresse, std::string email);

	virtual ~Humain() {};
	std::string getNom() { return nom; }
	std::string getPrenom() { return prenom; }
	int getAge() { return age; }
	std::string getTelephone() { return telephone; }
	std::string getAdresse() { return adresse; }
	std::string getEmail() { return email; }

	void setNom(std::string newVal) { this->nom = newVal; }
	void setPrenom(std::string newVal) { this->prenom = newVal; }
	void setAge(int newVal) { this->age = newVal; }
	void setTelephone(std::string newVal) { this->telephone = newVal; }
	void setAdresse(std::string newVal) { this->adresse = newVal; }
	void setEmail(std::string newVal) { this->email = newVal; }
};

