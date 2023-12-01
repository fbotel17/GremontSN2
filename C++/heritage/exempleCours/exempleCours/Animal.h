#pragma once

#include <string>

class Animal
{
private:
	std::string nom;
	int age;
	int nbPattes;

public:
	Animal(std::string nom, int age, int nbPattes);
	virtual ~Animal();
	int getNbPattes() { return nbPattes; }
	virtual void cri();

};

