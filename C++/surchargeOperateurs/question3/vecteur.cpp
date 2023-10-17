#include "vecteur.h"

vecteur::vecteur(float abs, float ord)
{
    x = abs;
    y = ord;
}

void vecteur::affiche() const
{
    std::cout << "x = " << x << " y = " << y << "\n";
}

float vecteur::operator*(const vecteur& other) const {
    return x * other.x + y * other.y;
}

vecteur vecteur::operator*(float scalar) const {
    vecteur result;
    result.x = x * scalar;
    result.y = y * scalar;
    return result;
}

vecteur operator*(float scalar, const vecteur& v) {
    vecteur result;
    result.x = scalar * v.x;
    result.y = scalar * v.y;
    return result;
}
