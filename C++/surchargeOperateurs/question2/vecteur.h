#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

// Classe vecteur
// Surdefinition de l'operateur + par une fonction AMIE
class vecteur
{
    float x, y;
public:
    vecteur(float abs = 0, float ord = 0);
    void affiche() const;
    vecteur operator+(float z) const;//retourne le vecteur correspondent à la somme
    friend vecteur operator+(float z, const vecteur& w);//idem
    vecteur& operator--(); // pré-décrémentation
    friend vecteur operator--(vecteur& w, int); // post-décrémentation
    bool operator==(const vecteur& a) const;
};

#endif // VECTEUR_H
