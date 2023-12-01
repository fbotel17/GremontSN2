
#include <iostream>
#include "etudiant.h"
#include "prof.h"
#include <vector>
using namespace std;

int main()
{
	etudiant eleve1((char*)"BOTEL", (char*)"Faustin", 2020, (char*)"SN2", new float[3]{ 2.0, 1.0, 5.0 }, (char*)"excellentissime élève");
	prof enseignant1("Alexandre", "Gremont", 2020, "Informatique", vector<string>{"SN1", "SN2"});
	eleve1.affiche();
	cout << endl;
	enseignant1.affiche();
	return 0;
}
