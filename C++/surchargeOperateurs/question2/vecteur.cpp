#include "vecteur.h"

#include <iostream>
#include <conio.h>

vecteur::vecteur(float abs, float ord)
{
    x = abs;
    y = ord;
}

void vecteur::affiche() const
{
    std::cout << "x = " << x << " y = " << y << "\n";
}

vecteur vecteur::operator+(float z) const
{
    vecteur res;
    res.x = z + x;
    res.y = z + y;
    return res;
}

vecteur operator+(float z, const vecteur& w)
{
    vecteur res;
    res.x = z + w.x;
    res.y = z + w.y;
    return res;
}

vecteur& vecteur::operator--()
{
    --x;
    --y;
    return *this;
}

vecteur operator--(vecteur& w, int)
{
    vecteur temp(w);
    --w.x;
    --w.y;
    return temp;
}

bool vecteur::operator==(const vecteur& a) const
{
    return x == a.x && y == a.y;
}
