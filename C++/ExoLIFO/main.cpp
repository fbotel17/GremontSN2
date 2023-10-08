#include "pile_entier.h"
#include <iostream>


using namespace std;

int main()
{
    pile_entier a(20);
    a.empile(5);
    a.empile(8);
    for(int i=0; i<a.getHauteur(); i++){
        cout<<a.getPile(i);
    }
    a.depile();
    return 0;
}
