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

void pile_entier::operator<(int valeur)
{
    if (!pleine())
    {
        pile[hauteur] = valeur;
        hauteur++;
        cout << "La valeur "<< valeur<< " a été ajouté à la pile" << endl;

    }
    else
    {
        cout << "La pile est pleine, impossible d'empiler." << endl;
    }
}

void pile_entier::operator>(int &n)
{
    if (!vide())
    {
        hauteur--;
        cout << "La valeur "<< pile[hauteur]<< " a été supprimé de la pile" << endl;
        n=pile[hauteur];

    }
    else
    {
        cout << "La pile est vide, impossible de dépiler." << endl;
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

int pile_entier::getPile(int index)
{
    return pile[index];
}
