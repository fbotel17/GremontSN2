#include "functions.h"

void echange(int * nombre1, int* nombre2)
{
    int temp = *nombre1;
    *nombre1 = *nombre2;
    *nombre2= temp;
}
