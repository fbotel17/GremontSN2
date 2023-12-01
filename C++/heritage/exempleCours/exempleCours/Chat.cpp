#include "Chat.h"
#include <iostream>


Chat::Chat(std::string nom, int age, int nbPattes)
	: Animal(nom, age, nbPattes)
{
}

void Chat::cri()
{
	std::cout << "Miaou !" << std::endl;

}
