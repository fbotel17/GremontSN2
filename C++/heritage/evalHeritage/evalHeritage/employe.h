#pragma once
#include <string>
#include <iostream>

using namespace std;

class employe  {
public:
	employe( std::string nom, std::string prenom, int age, int salaire);
	virtual ~employe() = default;

	std::string getNom();
	std::string getPrenom();
	int getAge();
	int getSalaire();

	void setNom(string name);
	void setPrenom(string name);
	void setAge(int nbAge);
	void setSalaire(int nbSalaire);

protected:
	std::string nom;
	std::string prenom;
	int age;
	int salaire;
};
