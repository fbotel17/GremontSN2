#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

const int MAX_ELEVES = 100;


int main()
{
    student eleve[100];
    string nomFichierSave;
    int nombreEleves = 0;
    int saisie;
    //boucle qui permet de faire le menu
    do{
        system("clear"); // clear le terminal pour mac
        cout<<"Que voulez vous faire ?"<<endl<<"Tapez 1 pour ajouter un élève"<<endl<<"Tapez 2 pour afficher les élèves"<<endl<<"Tapez 3 pour enregistrer les élèves dans un fichier"<<endl<<"Tapez 4 pour charger les élèves provenants d'un fichier"<<endl<<"Tapez 0 pour exit"<<endl<< "Que choisissez vous ? : ";
        cin>>saisie;
        if(saisie == 1){
            system("clear");

            addStudent(eleve, &nombreEleves);

            displayStudent(eleve, nombreEleves);

            cout << "Appuyez sur Entrée pour continuer...";
            cin.ignore(); //permet d'éviter les bug lors de la saisie
            cin.get();    // attend que l'utilisateur appuie sur Entrée
            system("clear");

        }
        else if(saisie == 2)
        {
            system("clear");
            displayStudent(eleve, nombreEleves);

            cout << "Appuyez sur Entrée pour continuer...";
            cin.ignore();
            cin.get();
            system("clear");

        }
        else if(saisie == 3)
        {
            system("clear");
            cout<<"Quel est le nom du fichier dans lequel vous voulez enregistrer vos élèves ? :"<<endl;
            cin>>nomFichierSave;

            saveStudent(eleve, nombreEleves, nomFichierSave);

            cout << "Appuyez sur Entrée pour continuer...";
            cin.ignore();
            cin.get();
            system("clear");
        }
        else if(saisie == 4)
        {

            system("clear");

            string nomFichier; // nom du fichier à charger

            cout<<"quel fichier voulez vous charger ? ajoutez l'entension : "<<endl;
            cin>>nomFichier;

            loadStudent(eleve, MAX_ELEVES, nomFichier, nombreEleves);

            cout << "Appuyez sur Entrée pour continuer...";
            cin.ignore();
            cin.get();
            system("clear");

        }
    }while(saisie!= 0);

    return 0;
}
