#include "functions.h"

int convertirSecondes(Temps a){
    int secondesTotales = 0;
    secondesTotales += a.secondes;
    secondesTotales += a.minutes * 60;
    secondesTotales += a.heure*3600;

    return secondesTotales;

}

Temps secondesEnHeures(int secondes){
    Temps a;
    a.secondes = secondes % 60;
    a.minutes = secondes /60;
    a.heure = a.minutes /60;
    a.minutes = a.minutes % 60;

    return a;
}

Temps addition(Temps a, Temps b){
    Temps c;
    int secondes = a.secondes + b.secondes;
    int minutes = a.minutes + b.minutes;
    int heures = a.heure + b.heure;
    secondes += minutes * 60 + heures * 3600;

    c.secondes = secondes % 60;
    c.minutes = secondes /60;
    c.heure = c.minutes /60;
    c.minutes = c.minutes % 60;



    return c;
}
