#include "pile_entier.h"
#include <iostream>

using namespace std ;


pile_entier::pile_entier(int taille_max) : taille(taille_max), hauteur(0)
{
    pile = new int[taille];
}

pile_entier::~pile_entier()
{
    delete[] pile;
}

void pile_entier::empile(int valeur)
{
    if (!pleine())
    {
        pile[hauteur] = valeur;
        hauteur++;
    }
    else
    {
        cout << "La pile est pleine, impossible d'empiler." << endl;
    }
}

int pile_entier::depile()
{
    if (!vide())
    {
        hauteur--;
        return pile[hauteur];
    }
    else
    {
        cout << "La pile est vide, impossible de dépiler." << endl;
            return -1;
    }
}

int pile_entier::pleine()
{
    return hauteur == taille;
}

int pile_entier::vide()
{
    return hauteur == 0;
}

int pile_entier::getHauteur()
{
    return hauteur;
}

int pile_entier::getTaille()
{
    return taille;
}

int pile_entier::getPile(int index)
{
    return pile[index];
}



