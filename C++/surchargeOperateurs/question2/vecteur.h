#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

// Classe vecteur
// Surdefinition de l'operateur + par une fonction AMIE

class vecteur
{
    float x, y;
public:
    vecteur(float, float);
    void affiche();
    vecteur operator+(float);
    friend vecteur operator+(float, const vecteur&);
    void operator--(); // Opérateur de décrémentation préfixe
    friend void operator--(vecteur&, int);

    // Nouvelle méthode pour attendre une touche
    static void waitForKeyPress();
};

#endif // VECTEUR_H
