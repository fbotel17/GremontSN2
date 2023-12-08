#include "de.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Constructeur par défaut
de::de() {
	scoreTotal = 0;
	initialiserAleatoire();
	lancerDe();

}

// Constructeur avec initialisation de la valeur
de::de(int valeurInitiale) : valeur(valeurInitiale) {}

// Méthode pour lancer le dé
void de::lancerDe() {
	valeur = rand() % 6 + 1;
	this->scoreTotal = scoreTotal + valeur;

}

// Méthode pour remettre le score à 0
void de::resetScore() {
	valeur = 0;
}

// Surcharge de l'opérateur d'incrémentation (++dd)
de& de::operator++(int) {
	lancerDe();
	return *this;
}

// Surcharge de l'opérateur d'addition (n += dd)
int operator+=(int& n, de de) {
	n = de.valeur;
	return n;
}

// Surcharge de l'opérateur d'affectation (dd = 0)
void de::operator=(int val) {
	scoreTotal = val;
}

// Surcharge de l'opérateur de comparaison (n < dd)
int operator<(int& n, de de) {
	n = de.scoreTotal;
	return n;
}


// Méthode pour initialiser la graine du générateur aléatoire
void de::initialiserAleatoire() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
}