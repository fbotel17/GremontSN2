#include <iostream>
#include <stdio.h>
#include "functions.h"

using namespace std;

int main()
{

    int tab[100];
    int taille = 0;
    initialisation(tab, &taille);
    affichage(tab, taille);
    int test;
    test=rechercheDichotomie(tab, taille, 5);
    cout<<test;




    return 0;
}
