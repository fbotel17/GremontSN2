#include <iostream>
#include "Chien.h"
#include "Chat.h"
#include <vector>
#include <conio.h>

int main(int argc, char ** argv)
{
	/*


	std::vector<Animal*> animals;

	for (int i = 0; i < 10; i++)
	{
		Animal* a = nullptr;
		if (i % 2 == 0)
		{
			a = new Chien("Beethoven " + std::to_string(i), 1 + i, 4 + i);
		}
		else
		{
			a = new Chat("Garfield " + std::to_string(i), 2 + i, 10 - i);
		}
		animals.push_back(a);
	}

	for (Animal* a : animals)
	{
		a->cri();
		delete a;
	}
	*/

	Animal* chien1 = new Chien("Test", 5);
	chien1->cri();

	Chien* chien2 = new Chien("Test 2", 7);
	chien2->cri();

	delete chien1;
	delete chien2;

	_getch();
	return 0;
}
