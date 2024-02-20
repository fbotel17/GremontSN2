#pragma once
#include "Humain.h"
#include <vector>
typedef struct {
    std::string nom;
    double note;
} matiere;


class Etudiant :
    public Humain
{
    std::vector<matiere>matieres;
    std::string classe;

public:
    Etudiant(std::string nom, std::string prenom, int age, std::string telephone, std::string adresse, std::string email, std::vector<matiere> matieres, std::string classe);

};

