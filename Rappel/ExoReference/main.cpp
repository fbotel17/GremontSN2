#include <iostream>
#include "functions.h"

using namespace std;

int main(int argc, char ** argv)
{
    essai myStruct = {42, 1.55};

    cout << "Avant la remise a zero : n = " << myStruct.n << ", x = " << myStruct.x << std::endl;

    // on remet à zéro par adresse
    raz(&myStruct);

    //on affiche nos 2 valeurs qui sont passées à z&ro par adresse
    cout << "Après remise a zero par adresse : n = " << myStruct.n << ", x = " << myStruct.x << std::endl;

    //on redéfini nos 2 valeurs
    myStruct = {42, 3.14f};

    //on affiche à nouveau nos valeur après la mise à zéro par référence
    cout << "Avant remise a zero par référence : n = " << myStruct.n << ", x = " << myStruct.x << std::endl;


    // Remise à zéro par référence
    raz(myStruct);

    cout << "Après remise a zero par référence : n = " << myStruct.n << ", x = " << myStruct.x << std::endl;

    return 0;
}
