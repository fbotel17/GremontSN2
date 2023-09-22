#include <iostream>
#include <stdio.h>

#include "functions.h"

using namespace std;

int main(int argc, char ** argv)
{
    int saisie;
    do{
        Temps a;

        cout<<"Que voulez vous faire ?"<<endl<<"Tapez 1 pour Heures en secondes"<<endl<<"Tapez 2 pour Secondes en heures"<<endl<<"Tapez 3 pour additionner 2 temps"<<endl<<"Tapez 0 pour exit"<<endl<< "Que choisissez vous ? : ";
        cin>>saisie;
        if(saisie == 1){
            system("clear"); // Utilisez "clear" pour macOS
            cout << "Entrez une heure :" << endl;
            cin>>a.heure;
            cout << "Entrez un nombre de minutes inférieur à 60 :" << endl;
            cin>>a.minutes;
            while(a.minutes>60){
                cout << "Entrez un nombre de minutes inférieur à 60 :" << endl;
                cin>>a.minutes;
            }
            cout << "Entrez un nombre de secondes inférieur à 60 :" << endl;
            cin>>a.secondes;
            while(a.secondes>60){
                cout << "Entrez un nombre de minutes inférieur à 60 :" << endl;
                cin>>a.secondes;
            }

            cout<<"Heure :"<<a.heure<<endl;
            cout<<"Minutes :"<<a.minutes<<endl;
            cout<<"secondes :"<<a.secondes<<endl;

            int secondesTot = convertirSecondes(a);
            cout <<"nombres de secondes totales : "<< secondesTot <<endl;
            cin.ignore(); // Ignorer le reste de la ligne précédente
            cin.get();    // Attendre que l'utilisateur appuie sur Entrée
            system("clear"); // Utilisez "clear" pour macOS

        }
        else if(saisie == 2)
        {
            Temps b;

            system("clear"); // Utilisez "clear" pour macOS

            int secondes;
            cout << "Entrez un nombre de secondes pour le converir en heures :" << endl;
            cin>>secondes;
            b = secondesEnHeures(secondes);
            cout<<"Heures : "<< b.heure<<endl<<"Minutes : "<< b.minutes<<endl<<"Secondes : "<< b.secondes<<endl;

            cout << "Appuyez sur Entrée pour continuer...";
            cin.ignore(); // Ignorer le reste de la ligne précédente
            cin.get();    // Attendre que l'utilisateur appuie sur Entrée
            system("clear"); // Utilisez "clear" pour macOS


        }
        else if(saisie == 3)
        {

            Temps c;
            Temps d;
            Temps e;


            system("clear"); // Utilisez "clear" pour macOS

            cout << "Entrez une heure n°1 :" << endl;
            cin>>c.heure;
            cout << "Entrez un nombre de minutes n°1 inférieur à 60 :" << endl;
                cin>>c.minutes;
            while(c.minutes>60){
                cout << "Entrez un nombre de minutes n°1 inférieur à 60 :" << endl;
                cin>>c.minutes;
            }
            cout << "Entrez un nombre de secondes n°1 inférieur à 60 :" << endl;
                cin>>c.secondes;
            while(c.secondes>60){
                cout << "Entrez un nombre de minutes n°1 inférieur à 60 :" << endl;
                cin>>c.secondes;
            }

            cout << "Entrez une heure n°2 :" << endl;
                cin>>d.heure;
            cout << "Entrez un nombre de minutes n°2 inférieur à 60 :" << endl;
                cin>>d.minutes;
            while(d.minutes>60){
                cout << "Entrez un nombre de minutes n°2 inférieur à 60 :" << endl;
                cin>>d.minutes;
            }
            cout << "Entrez un nombre de secondes n°2 inférieur à 60 :" << endl;
            cin>>d.secondes;
            while(d.secondes>60){
                cout << "Entrez un nombre de minutes n°2 inférieur à 60 :" << endl;
                cin>>d.secondes;
            }

            e = addition(c, d);
            cout<<"Heures : "<< e.heure<<endl<<"Minutes : "<< e.minutes<<endl<<"Secondes : "<< e.secondes<<endl;

            cin.ignore(); // Ignorer le reste de la ligne précédente
            cin.get();    // Attendre que l'utilisateur appuie sur Entrée
            system("clear"); // Utilisez "clear" pour macOS




        }
    }while(saisie!= 0);


    return 0;
}
