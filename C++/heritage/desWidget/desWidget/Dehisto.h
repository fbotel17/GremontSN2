#pragma once
#include "de.h"
class Dehisto :
	public de
{
	int scoreTotal;
	int tab[7];
public:
	Dehisto();
	void jet(); //simule le jet d�un d�
	void jet(int n); //simule le jet de n d�
};

