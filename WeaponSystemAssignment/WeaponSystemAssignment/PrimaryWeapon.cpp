#include "PrimaryWeapon.h"

PrimaryWeapon::PrimaryWeapon()
{
}


PrimaryWeapon::~PrimaryWeapon()
{
}

PrimaryWeapon::PrimaryWeapon(std::string str) {
	Weapon::firingText = str;
}