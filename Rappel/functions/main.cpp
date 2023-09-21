
#include "functions.h"
#include <iostream>


using namespace std;


int main(int argc, char ** agrv)
{
    int tab[20];
    int nbValues = 0;
    int valeurSup;
    empile(5, tab, &nbValues);
    empile(10, tab, &nbValues);
    depile(&valeurSup, tab, &nbValues);
    cout<<valeurSup;
    empile(15, tab, &nbValues);
    cout<<"coucou";


    affiche(tab, nbValues);
    return 0;
}
