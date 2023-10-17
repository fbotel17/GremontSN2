#include <iostream>
#include "vecteur.h"

using namespace std;

int main()
{
    vecteur a(2, 6), b(4, 8), c, d;
    c = a + 6.5;
    c.affiche();
    d = 7.8 + b;
    d.affiche();
    a--;
    --a;

    // Utilisez la nouvelle méthode pour attendre une touche
    vecteur::waitForKeyPress();

    return 0;
}
