#include <iostream>

using namespace std;

int main(int argc, char ** argv)
{
    float varfloat = 1.7;
    cout << "adresse de varFloat"<< &varfloat;
    float *pointeur;
    pointeur = &varfloat;
    cout << "valeur du pointeur" << *pointeur;
    return 0;
}
