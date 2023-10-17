#include <iostream>
#include "pile_entier.h"

using namespace std;

int main()
{
    pile_entier a(20);
    int valeurSup = 0;
    a < 20; // Utilisation de l'opérateur < pour empiler 20
    a > valeurSup; // Utilisation de l'opérateur > pour dépiler et stocker la valeur dans valeurSup
    cout << valeurSup << endl;
    return 0;
}
