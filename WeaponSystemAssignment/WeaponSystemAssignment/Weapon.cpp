#include "Weapon.h"
#include <iostream>

Weapon::Weapon()
{
}


Weapon::~Weapon()
{
}

void Weapon::Shoot() {
	std::cout << firingText << std::endl;
}
