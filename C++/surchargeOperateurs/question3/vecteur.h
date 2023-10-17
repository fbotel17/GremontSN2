#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>

class vecteur
{
    float x, y;
public:
    vecteur(float abs = 0, float ord = 0);
    void affiche() const;
    float vecteur::operator*(const vecteur& other) const;
    vecteur vecteur::operator*(float scalar) const;
    friend vecteur operator*(float scalar, const vecteur& v);
};

#endif // VECTEUR_H
