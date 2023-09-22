#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    student eleve[100];
    int nombreEleves = 0;
    int saisie;
    do{
        system("clear"); // Utilisez "clear" pour macOS
        cout<<"Que voulez vous faire ?"<<endl<<"Tapez 1 pour ajouter un élève"<<endl<<"Tapez 2 pour afficher les élèves"<<endl<<"Tapez 3 pour enregistrer les élèves dans un fichier"<<endl<<"Tapez 4 pour charger les élèves provenants d'un fichier"<<endl<<"Tapez 0 pour exit"<<endl<< "Que choisissez vous ? : ";
        cin>>saisie;
        if(saisie == 1){
            system("clear"); // Utilisez "clear" pour macOS


            addStudent(eleve, &nombreEleves);
            cin.ignore();


            displayStudent(eleve, nombreEleves);

            cout << "Appuyez sur Entrée pour continuer...";
            cin.ignore(); // Ignorer le reste de la ligne précédente
            cin.get();    // Attendre que l'utilisateur appuie sur Entrée
            system("clear"); // Utilisez "clear" pour macOS

        }
        else if(saisie == 2)
        {


            system("clear"); // Utilisez "clear" pour macOS



            cout << "Appuyez sur Entrée pour continuer...";
            cin.ignore(); // Ignorer le reste de la ligne précédente
            cin.get();    // Attendre que l'utilisateur appuie sur Entrée
            system("clear"); // Utilisez "clear" pour macOS


        }
        else if(saisie == 3)
        {

            system("clear"); // Utilisez "clear" pour macOS


            cout << "Appuyez sur Entrée pour continuer...";
            cin.ignore(); // Ignorer le reste de la ligne précédente
            cin.get();    // Attendre que l'utilisateur appuie sur Entrée
            system("clear"); // Utilisez "clear" pour macOS




        }
        else if(saisie == 4)
        {

            system("clear"); // Utilisez "clear" pour macOS


            cout << "Appuyez sur Entrée pour continuer...";
                    cin.ignore(); // Ignorer le reste de la ligne précédente
            cin.get();    // Attendre que l'utilisateur appuie sur Entrée
            system("clear"); // Utilisez "clear" pour macOS




        }
    }while(saisie!= 0);

    return 0;
}
