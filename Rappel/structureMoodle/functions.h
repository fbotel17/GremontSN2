#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct
{
    int heure;
    int minutes;
    int secondes;

}Temps;

int convertirSecondes(Temps a);

Temps secondesEnHeures(int secondes);

Temps addition(Temps a, Temps b);


#endif // FUNCTIONS_H
