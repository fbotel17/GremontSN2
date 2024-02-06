#include "Humain.h"

using namespace std;

class Humain
{
	string nom;
	string prenom;
	int age;
	string telephone;
	string adresse;
	string email;

public:
	Humain(string nom, string prenom, int age, string telephone, string adresse, string email);

	string getNom() { return nom; }
	string getPrenom() { return prenom; }
	int getAge() { return age; }
	string getTelephone() { return telephone; }
	string getAdresse() { return adresse; }
	string getEmail() { return email; }


	void setNom(string newVal) { this->nom = newVal; }
	void setPrenom(string newVal) { this->prenom = newVal; }
	void setNom(string newVal) { this->age = newVal; }
	void setNom(string newVal) { this->telephone = newVal; }
	void setNom(string newVal) { this->adresse = newVal; }
	void setNom(string newVal) { this->email = newVal; }
};
