#ifndef STRING2_H
#define STRING2_H

class chaine2
{
private:
   int _taille; // taille allouée pour la chaîne
   char* _ptr; // pointeur sur la chaîne

public:
   chaine2(const char* ch = ""); // constructeur, initialisation, _taille reçoit la longueur de la chaîne
   chaine2(char c, int n = 1); // constructeur, alloue un emplacement de n caractères initialisés à c
   chaine2(const chaine2&); // constructeur de recopie
   ~chaine2(); // destructeur, libère l'emplacement mémoire
   int longueur();
   char& operator[](int);
   void operator+=(char);
   void operator+=(const chaine2&);
   chaine2& operator+(const chaine2&);
   chaine2& minuscule();
   chaine2& operator=(const chaine2&);
   int operator==(const chaine2&);
   int operator!=(const chaine2&);
   // Les opérateurs ajoutés
   chaine2 operator+(char) const;
   chaine2 operator+(const char*) const;
   chaine2& operator<<(const char*);
   chaine2& operator>>(char*);
};

#endif
