#include <iostream>
#include "vecteur.h"

using namespace std;

int main()
{
    vecteur v1, v2(5, 6), v3(5, 3), v4(3);
    float h, p;
    p = v3 * v2;
    v3 = h * v1;
    v4 = v1 * h;
    v3.affiche();
    cout<<p;
    return 0;
}
