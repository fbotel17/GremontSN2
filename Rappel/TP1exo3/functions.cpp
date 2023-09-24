#include "functions.h"
#include <iostream>
#include <iomanip> // Pour formater le texte
#include <fstream>

using namespace std;

const int COLUMN_WIDTH = 20; // Taille fixe pour chaque colonne

int addStudent(student *eleve, int *nombreEleves) {
    cout << "Quel est le nom de l'élève ? : " << endl;
                                                     cin.ignore(); // Ignorer le caractère de nouvelle ligne restant
    cin.getline(eleve[*nombreEleves].nom, sizeof(eleve[*nombreEleves].nom));

    cout << "Quel est le prénom de l'élève ? : " << endl;
                                                        cin.getline(eleve[*nombreEleves].prenom, sizeof(eleve[*nombreEleves].prenom));

    cout << "Quel est l'adresse de l'élève ? : " << endl;
                                                        cin.getline(eleve[*nombreEleves].adresse, sizeof(eleve[*nombreEleves].adresse));

    cout << "Quel est la classe de l'élève ? : " << endl;
                                                        cin.getline(eleve[*nombreEleves].classe, sizeof(eleve[*nombreEleves].classe));

    (*nombreEleves)++;

    return *nombreEleves;
}


void displayStudent(student *eleve, int nombreEleves) {
    const int COLUMN_WIDTH = 20; // Largeur de colonne fixe
    const int NUM_COLUMNS = 4;  // Nombre de colonnes

    int totalWidth = (COLUMN_WIDTH + 1) * NUM_COLUMNS; // Ajouter un espace supplémentaire

    // Créer la ligne de séparation en fonction de la longueur totale
    string separatorLine = string(totalWidth, '-');

    cout << separatorLine << endl;
    cout << "| " << setw(COLUMN_WIDTH) << left << "Nom"
         << " | " << setw(COLUMN_WIDTH) << left << "Prénom"
         << " | " << setw(COLUMN_WIDTH) << left << "Adresse"
         << " | " << setw(COLUMN_WIDTH) << left << "Classe" << " |" << endl;
    cout << separatorLine << endl;

    for (int i = 0; i < nombreEleves; i++) {
        cout << "| " << setw(COLUMN_WIDTH) << left << eleve[i].nom
             << " | " << setw(COLUMN_WIDTH) << left << eleve[i].prenom
             << " | " << setw(COLUMN_WIDTH) << left << eleve[i].adresse
             << " | " << setw(COLUMN_WIDTH) << left << eleve[i].classe << " |" << endl;
    }

    cout << separatorLine << endl;
}


void saveStudent(student *eleve, int nombreEleves) {
    // Ouvrir le fichier en mode écriture
    char nomFichier[20] = "eleves.txt";
    fstream fichier(nomFichier, ios::out);

    // Vérifier si le fichier a été ouvert avec succès
    if (!fichier.is_open()) {
        cerr << "Erreur : Impossible d'ouvrir le fichier " << nomFichier << endl;
        return;
    }

    // Écrire les données existantes dans le fichier
    for (int i = 0; i < nombreEleves; i++) {
        fichier << endl;
        fichier << "Nom: " << eleve[i].nom << endl;
        fichier << "Prénom: " << eleve[i].prenom << endl;
                fichier << "Adresse: " << eleve[i].adresse << endl;
        fichier << "Classe: " << eleve[i].classe << endl;
    }

    // Fermer le fichier
    fichier.close();

    cout << "Données des élèves sauvegardées dans " << nomFichier << endl;
}


void loadStudent(student *eleve, int maxNombreEleves, const char *nomFichier, int &nombreEleves) {
    // Ouvrir le fichier en mode lecture
    ifstream fichier(nomFichier);

    // Vérifier si le fichier a été ouvert avec succès
    if (!fichier.is_open()) {
        cerr << "Erreur : Impossible d'ouvrir le fichier " << nomFichier << std::endl;
        return;
    }

    // Lire les données des élèves à partir du fichier
    nombreEleves = 0;
    char buffer[100]; // Buffer pour lire chaque ligne
    while (nombreEleves < maxNombreEleves && fichier) {
        fichier.getline(buffer, sizeof(buffer));

        fichier.getline(buffer, sizeof(buffer));
        const char* debutCopienom = buffer + 5; // Pointeur pour commencer à partir du cinquième caractère
        // Utilisez strcpy pour copier la sous-chaîne dans eleve[nombreEleves].nom
        strcpy(eleve[nombreEleves].nom, debutCopienom);


        fichier.getline(buffer, sizeof(buffer));
        const char* debutCopieprenom = buffer + 9;
        strcpy(eleve[nombreEleves].prenom, debutCopieprenom);

        fichier.getline(buffer, sizeof(buffer));
        const char* debutCopiadressee = buffer + 9;
        strcpy(eleve[nombreEleves].adresse, debutCopiadressee);

        fichier.getline(buffer, sizeof(buffer));
        const char* debutCopieclasse = buffer + 8;
        strcpy(eleve[nombreEleves].classe, debutCopieclasse);

        // Vérifier si nous avons réussi à lire toutes les informations
        if (fichier) {
            nombreEleves++;
        }
    }

    // Fermer le fichier
    fichier.close();

    cout << "Données des élèves chargées depuis " << nomFichier << std::endl;
}





