#ifndef PILE_ENTIER_H
#define PILE_ENTIER_H


class pile_entier
{
    int *pile, taille, hauteur; // pointeur sur les valeurs de la pile,
        // taille maximum, hauteur actuelle
public:
    pile_entier(int); // constructeur, taille de la pile, 20 par defaut, initialise la hauteur à 0
        // alloue dynamiquement de la place mémoire
    ~pile_entier(); // destructeur-libère la pile
    void operator<(int); // ajoute un élement
    void operator>(int &n); // retourne la valeur de l’entier en haut de la pile, la hauteur
        // diminue de 1 unité
    int pleine(); // retourne 1 si la pile est pleine, 0 sinon
    int vide(); // retourne 1 si la pile est vide, 0 sinon
    int getPile(int index);

};

#endif // PILE_ENTIER_H
