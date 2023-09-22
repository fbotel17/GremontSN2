#include "functions.h"
#include <iostream>

using namespace std;


void initialisation(int tab[], int* taille) {
    int saisie;
    cout << "Entrez une lettre pour sortir" << endl;

    do {
        cout << "Entrez votre valeur n°" << *taille + 1 << " : " << endl;
        cin >> saisie;

        if (cin.fail()) {
            // Si la saisie n'est pas un entier, on supprime l'erreur de cin
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break; // Sort de la boucle
        }

        int i = 0;
        bool insere = false;

        while (i < *taille) {
            if (saisie < tab[i]) {
                for (int j = *taille; j > i; j--) {
                    tab[j] = tab[j - 1];
                }
                tab[i] = saisie;
                insere = true;
                break;
            }
            i++;
        }

        if (!insere) {
            tab[i] = saisie;
        }

        (*taille)++;

    } while (*taille < 100);
}


void affichage(int tab[], int taille) {
    cout << "Tableau : [";
    for (int i = 0; i < taille; i++) {
        cout << " " << tab[i]<<";";
    }
    cout <<"]"<<endl;
}


int rechercheDichotomie(int tab[], int taille, int valeur) {
    int gauche = 0;
    int droite = taille - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        if (tab[milieu] == valeur) {
            return milieu;
        } else if (tab[milieu] < valeur) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }

    return -1;
}
