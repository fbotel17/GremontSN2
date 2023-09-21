#include <iostream>
#include <stdio.h>

using namespace std;


void triTableau(char **tableau, int taille) {
    int i, j;
    char *temp;

    for (i = 0; i < taille - 1; i++) {
        for (j = 0; j < taille - i - 1; j++) {
            if (strcmp(tableau[j], tableau[j + 1]) > 0) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
}

int main(){
    char **tableau = NULL;
    char saisie[100];
    int taille=0;

    do {
        cout << "Saisissez votre chaine :" << endl;
        cin >> saisie;

        if (strcmp(saisie, "exit") == 0) {
            break; // Sortir de la boucle si la saisie est "exit"
        }

        tableau = (char **)realloc(tableau, (taille + 1) * sizeof(char *));
        tableau[taille] = (char *)malloc((strlen(saisie) + 1) * sizeof(char));
        strcpy(tableau[taille], saisie);
        taille += 1;
    } while (1);



    triTableau(tableau, taille);
    for(int i=0; i<=taille; i++){
        cout<<endl<<tableau[i];
    }

    for (int i = 0; i < taille; i++) {
        printf("%s\n", tableau[i]);
        free(tableau[i]); // Libérer la mémoire allouée pour chaque chaîne
    }

    free(tableau); // Libérer la mémoire allouée pour le tableau de pointeurs
    return 0;

}
