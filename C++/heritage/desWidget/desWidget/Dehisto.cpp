#include "Dehisto.h"

Dehisto::Dehisto()
{

}

void Dehisto::jet()
{
	(*this)++;

}

void Dehisto::jet(int n)
{
	for (int i = 0; i < n; i++) {
		(*this)++;
	}
}
