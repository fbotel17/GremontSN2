#include "vecteur.h"

#include <iostream>
#include <conio.h>


vecteur::vecteur(float abs =0, float ord = 0)
{
   x=abs;
   y=ord;
}

void vecteur::affiche()
{
   cout << "x = " << x << " y = " << y << "\n";
}

vecteur vecteur::operator+(float z)
{
   vecteur res;
   res.x = z +x;
   res.y = z +y;
   return res;
}

vecteur operator+(float z, vecteur &w)
{
   vecteur res;
   res.x = z + w.x;
   res.y = z + w.y;
   return res;
}
