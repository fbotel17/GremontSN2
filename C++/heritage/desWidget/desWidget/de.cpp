#include "de.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Constructeur par d�faut
de::de() {
	initialiserAleatoire();
	lancerDe();
}

// Constructeur avec initialisation de la valeur
de::de(int valeurInitiale) : valeur(valeurInitiale) {}

// M�thode pour lancer le d�
int de::lancerDe() {
	valeur = rand() % 6 + 1;
	return valeur;
}

// M�thode pour remettre le score � 0
void de::resetScore() {
	valeur = 0;
}

// Surcharge de l'op�rateur d'incr�mentation (++dd)
void de::operator++() {
	lancerDe();
}

// Surcharge de l'op�rateur d'addition (n += dd)
void de::operator+=(int& n) {
	n += valeur;
}

// Surcharge de l'op�rateur d'affectation (dd = 0)
void de::operator=(int val) {
	resetScore();
}

// Surcharge de l'op�rateur de comparaison (n < dd)
bool de::operator<(int n) const {
	return n < valeur;
}

// M�thode pour afficher la valeur du d�
void de::afficher() const {
	std::cout << "D� " << valeur << std::endl;
}

// M�thode pour initialiser la graine du g�n�rateur al�atoire
void de::initialiserAleatoire() {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
}
