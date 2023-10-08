#include "functions.h"

void echange(int * nombre1, int* nombre2)
{
    //c'était trop dur mais j'y suis finalement parvenu
    //le principe est d'utiliser une variable temp pour faire l'échange de 2 valeurs pour ne pas perdre la valeur d'un variable
    int temp = *nombre1;
    *nombre1 = *nombre2;
    *nombre2= temp;
}
