#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct
{
    char nom[30];
    char prenom[30];
    char adresse[50];
    char classe[20];
}student;

int addStudent(student *eleve, int * nombreEleves);

void displayStudent(student *eleve, int  nombreEleves);


#endif // FUNCTIONS_H
