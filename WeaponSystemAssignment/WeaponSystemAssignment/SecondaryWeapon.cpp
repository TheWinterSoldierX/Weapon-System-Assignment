#include "SecondaryWeapon.h"

SecondaryWeapon::SecondaryWeapon()
{
}


SecondaryWeapon::~SecondaryWeapon()
{
}

SecondaryWeapon::SecondaryWeapon(std::string str) {
	Weapon::firingText = str;
}