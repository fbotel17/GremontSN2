#include <iostream>

#include "vecteur.h"



int main()
{
    vecteur a(2, 6), b(4, 8), c, d;
    c = a + 6.5;
    c.affiche();
    d = 7.8 + b;
    d.affiche();
    a.affiche();
    a--;
    a.affiche();
    --a;
    a.affiche();
    if (a == b) {
        std::cout << "Les vecteurs a et b sont égaux." << std::endl;
    } else {
        std::cout << "Les vecteurs a et b ne sont pas égaux." << std::endl;
    }
    return 0;
}
