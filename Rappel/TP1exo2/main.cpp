#include <iostream>
#include <stdio.h>
#include "functions.h"

using namespace std;

int main()
{

    int tab[100];
    int taille = 0;
    initialisation(tab, &taille);
    int searchElement;
    cout<<"Quelle valeur souhaitez vous rechercher ?"<<endl;
    cin>>searchElement;
    int place=rechercheDichotomie(tab, taille, searchElement);
    if(place == -1)
    {
        cout<<"Aucun élément du tableau ne correspond à votre recherche"<<endl;
    }else
    {
        affichage(tab, taille);
        cout<<"La valeur que vous cherchez se trouve à l'index "<<place<<endl;
    }




    return 0;
}
