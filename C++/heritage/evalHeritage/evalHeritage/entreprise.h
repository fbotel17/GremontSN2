#pragma once
#include <string>
#include <iostream>
#include "commerciaux.h"
#include "technicien.h"

using namespace std;

class entreprise
{
public:
	entreprise(string name);

protected:
	string raisonSociale;
	commerciaux;

};

