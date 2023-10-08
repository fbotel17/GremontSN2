#include "functions.h"

//ici on doit passer en pointeur car on souhaite changer la valeur de la structure
void raz(essai* ptrStruct)
{
    ptrStruct->n = 0;
    ptrStruct->x = 0.0f;
}


void raz(essai& refStruct)
{
    refStruct.n = 0;
    refStruct.x = 0.0f;
}
