#include <iostream>
#include "functions.h"

using namespace std;



int main()
{
    //on défini nos 2 variables
    int a = 5;
    int b = 2;

    //on affiche les 2 variables avant l'échange de valeur
    cout<<a <<" "<<b<<endl;

    //on échange les variables
    echange(&a, &b);

    //on affiche les variables une fois changé
    cout<<a <<" "<<b<<endl;

    return 0;
}

