#pragma once
#include "Animal.h"
class Chat :
	public Animal
{
public:
	Chat(std::string nom, int age, int nbPattes = 4);
	virtual void cri();

};

