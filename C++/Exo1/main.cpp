#include <iostream>
#include "point.h"
#include "pointFunction.h"

using namespace std;

int main(int argc, char ** agrv)
{

    point p(5, 3);
    affiche(p);
    point u(8, 9);
    affiche(u);

    p.copie(u);
    affiche(u);

    return 0;
}
