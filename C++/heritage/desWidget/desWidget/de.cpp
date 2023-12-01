#include "de.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Constructeur par défaut
de::de() {
	initialiserAleatoire();
	lancerDe();
}

// Constructeur avec initialisation de la valeur
de::de(int valeurInitiale) : valeur(valeurInitiale) {}

// Méthode pour lancer le dé
int de::lancerDe() {
	valeur = rand() % 6 + 1;
	return valeur;
}

// Méthode pour remettre le score à 0
void de::resetScore() {
	valeur = 0;
}

// Surcharge de l'opérateur d'incrémentation (++dd)
void de::operator++() {
	lancerDe();
}

// Surcharge de l'opérateur d'addition (n += dd)
void de::operator+=(int& n) {
	n += valeur;
}

// Surcharge de l'opérateur d'affectation (dd = 0)
void de::operator=(int val) {
	resetScore();
}

// Surcharge de l'opérateur de comparaison (n < dd)
bool de::operator<(int n) const {
	return n < valeur;
}

// Méthode pour afficher la valeur du dé
void de::afficher() const {
	std::cout << "Dé " << valeur << std::endl;
}

// Méthode pour initialiser la graine du générateur aléatoire
void de::initialiserAleatoire() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
}
