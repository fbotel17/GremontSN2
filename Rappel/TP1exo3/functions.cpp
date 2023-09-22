#include "functions.h"
#include <iostream>
#include <iomanip> // Pour formater le texte

using namespace std;


int addStudent(student *eleve, int *nombreEleves)
{
    cout<<"Quel est le nom de l'élève ? : "<<endl;
    cin>>eleve[*nombreEleves].nom;
    cout<<endl<<"Quel est le prenom de l'élève ? : "<<endl;
    cin>>eleve[*nombreEleves].prenom;
    cout<<endl<<"Quel est l'adresse de l'élève ? : "<<endl;
    cin>>eleve[*nombreEleves].adresse;
    cin.ignore();

    cout<<endl<<"Quel est la classe de l'élève ? : "<<endl;
    cin>>eleve[*nombreEleves].classe;

    *nombreEleves = *nombreEleves+1;

    return *nombreEleves;
}

void displayStudent(student *eleve, int nombreEleves) {
    cout << "------------------------------------------------------------------------" << endl;
    cout << "| Nom             | Prénom          | Adresse                      | Classe  |" << endl;
            cout << "------------------------------------------------------------------------" << endl;

    for (int i = 0; i < nombreEleves; i++) {
        cout << "| " << setw(16) << left << eleve[i].nom << " | "
             << setw(16) << left << eleve[i].prenom << " | "
             << setw(30) << left << eleve[i].adresse << " | "
             << setw(9) << left << eleve[i].classe << " |" << endl;
    }

    cout << "------------------------------------------------------------------------" << endl;
}

