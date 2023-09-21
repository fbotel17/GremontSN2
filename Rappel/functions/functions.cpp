#include "functions.h"

#include <stdio.h>
#include <iostream>

using namespace std;

// fonction empile

bool empile(int value, int* tab, int * nbValues)
{

    if(*nbValues<20){
        tab[*nbValues] = value;
        *nbValues = *nbValues + 1;
        return true;
    }
    else
    {
        return false;
    }
}



//fonction depile

bool depile(int * valeurSup, int* tab, int * nbValues)
{

    if(*nbValues>0){
        *nbValues = *nbValues - 1;
        *valeurSup = tab[*nbValues];
        return true;
    }
    else
    {
        return false;
    }
}

void affiche(int * tab, int nbValues)
{
    cout << "[ ";

    for(int i = 0 ; i < nbValues; i++)
    {
        cout << tab[i] << "; ";
    }
    cout << "]";

}

