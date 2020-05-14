#include <iostream>
#include "Shannon.h"

int main()
{
	setlocale(0, "Rus");
	Shannon_Fano fano;
	fano.convert("Salam Aleikum, world!");
	fano.display();
	system("pause");
}